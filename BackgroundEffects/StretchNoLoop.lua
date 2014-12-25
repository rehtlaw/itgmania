local Color1 = color(Var "Color1");

local t = Def.ActorFrame {
	LoadActor(Var "File1") .. {
		OnCommand=function(self)
			self:xy(SCREEN_CENTER_X,SCREEN_CENTER_Y)
			self:scale_or_crop_background()
			self:diffuse(Color1)
			if self.loop ~= nil then
				self:loop(false)
				-- make videos start at beginning to prevent sticking on last frame
				self:position(0)
			end
			self:effectclock("music")
		end;
		GainFocusCommand=cmd(play);
		LoseFocusCommand=cmd(pause);
	};
};

return t;
