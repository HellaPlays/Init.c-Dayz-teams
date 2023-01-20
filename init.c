void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission: MissionServer
{

    ref array< string > Team1 = new array< string >;
    ref array< string > Team2 = new array< string >;
    ref array< string > Team3 = new array< string >;
    ref array< string > Team4 = new array< string >;
    ref array< string > Team5 = new array< string >;
    ref array< string > Team6 = new array< string >;
    ref array< string > Team7 = new array< string >;
    ref array< string > Team8 = new array< string >;
    ref array< string > Team9 = new array< string >;
    ref array< string > Team10 = new array< string >;

    void CustomMission()
    {
        Team1 = new array< string >;
        Team2 = new array< string >;
        Team3 = new array< string >;
        Team4 = new array< string >;
        Team5 = new array< string >;
        Team6 = new array< string >;
        Team7 = new array< string >;
        Team8 = new array< string >;
        Team9 = new array< string >;
        Team10 = new array< string >;
        InitPlayerWhitelist();
	}
	
	// ------------------------------------------------------------
	// Override CreateCharacter
	// ------------------------------------------------------------
	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{

		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );
		GetGame().SelectPlayer( identity, m_player );

		return m_player;
	}
	
	// ------------------------------------------------------------
	// SetRandomHealth
	// ------------------------------------------------------------
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.25, 0.65 );
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}
	
	// ------------------------------------------------------------
	// Override StartingEquipSetup
	// ------------------------------------------------------------
	void addMags(PlayerBase player, string mag_type, int count)
	{
		if (count < 1)
			return;

		EntityAI mag;

		for (int i = 0; i < count; i++) {
			mag = player.GetInventory().CreateInInventory(mag_type);
		}

		player.SetQuickBarEntityShortcut(mag, 2, true);
	}

	void InitPlayerWhitelist()
    {
		// Example with Bohemia UID: 	Team1.Insert( "JCmXrrt43efttyhfewew7tRLMUCOE6roH2O8SklBB1o=" );
		// Example with Steam64 ID: 	Team1.Insert( "76561198040948171" );
				
		// Team1 MEMBERS: Can be Steam64 ID or Bohemia UID
		Team1.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team1.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team1.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team1.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team1.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team1.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team1.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team1.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team1.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team1.Insert( "ReplaceWithUniqueID" ); // Players Name

		// Team2 MEMBERS: Can be Steam64 ID or Bohemia UID
		Team2.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team2.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team2.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team2.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team2.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team2.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team2.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team2.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team2.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team2.Insert( "ReplaceWithUniqueID" ); // Players Name		
				
		// Team3 MEMBERS: Can be Steam64 ID or Bohemia UID
		Team3.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team3.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team3.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team3.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team3.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team3.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team3.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team3.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team3.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team3.Insert( "ReplaceWithUniqueID" ); // Players Name

		// Team 4 MEMBERS: Can be Steam64 ID or Bohemia UID
		Team4.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team4.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team4.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team4.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team4.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team4.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team4.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team4.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team4.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team4.Insert( "ReplaceWithUniqueID" ); // Players Name
		
		// Team5 MEMBERS: Can be Steam64 ID or Bohemia UID
		Team5.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team5.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team5.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team5.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team5.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team5.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team5.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team5.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team5.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team5.Insert( "ReplaceWithUniqueID" ); // Players Name

		// Team6 MEMBERS: Can be Steam64 ID or Bohemia UID
		Team6.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team6.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team6.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team6.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team6.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team6.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team6.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team6.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team6.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team6.Insert( "ReplaceWithUniqueID" ); // Players Name		
	
		// Team7 MEMBERS: Can be Steam64 ID or Bohemia UID
		Team7.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team7.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team7.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team7.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team7.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team7.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team7.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team7.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team7.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team7.Insert( "ReplaceWithUniqueID" ); // Players Name

		// Team8 MEMBERS: Can be Steam64 ID or Bohemia UID
		Team8.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team8.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team8.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team8.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team8.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team8.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team8.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team8.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team8.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team8.Insert( "ReplaceWithUniqueID" ); // Players Name

		// Team9 MEMBERS: Can be Steam64 ID or Bohemia UID
		Team9.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team9.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team9.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team9.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team9.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team9.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team9.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team9.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team9.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team9.Insert( "ReplaceWithUniqueID" ); // Players Name

		// Team10 MEMBERS: Can be Steam64 ID or Bohemia UID
		Team10.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team10.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team10.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team10.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team10.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team10.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team10.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team10.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team10.Insert( "ReplaceWithUniqueID" ); // Players Name
		Team10.Insert( "ReplaceWithUniqueID" ); // Players Name
    }

// Team1 Loadout
	EntityAI Team1LoadOut(PlayerBase player)
	{
		ref TStringArray hatArray = {"BallisticHelmet_Black"};
		ref TStringArray topArray = {"M65Jacket_Black"};
		ref TStringArray pantsArray = {"CargoPants_Black"};	
		ref TStringArray vestArray  = {"HighCapacityVest_Black"};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"MilitaryBoots_Black"};	
		ref TStringArray maskArray = {"BalaclavaMask_Blackskull"};	
		ref TStringArray glovesArray = {"TacticalGloves_Black"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {""};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		player.GetInventory().CreateInInventory("Lockpick");
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("AKM");					// Weapon
		gun.GetInventory().CreateAttachment("AK_RailHndgrd");						// Weapon Attachment (Handguard)
		ItemBase gunlight = gun.GetInventory().CreateAttachment("UniversalLight");			// Weapon Attachment (Universal Light)
		gunlight.GetInventory().CreateAttachment("Battery9V");						//     Add battery to Universal Light
		addMags(player, "Mag_AKM_30Rnd", 4);								// Magazines
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());	// Melee
				
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}
		
// Team2 Loadout
	EntityAI Team2LoadOut(PlayerBase player)
	{
		ref TStringArray hatArray = {"BallisticHelmet_Black"};
		ref TStringArray topArray = {"M65Jacket_Black"};
		ref TStringArray pantsArray = {"CargoPants_Black"};	
		ref TStringArray vestArray  = {"HighCapacityVest_Black"};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"MilitaryBoots_Black"};	
		ref TStringArray maskArray = {"BalaclavaMask_Blackskull"};	
		ref TStringArray glovesArray = {"TacticalGloves_Black"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {""};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		player.GetInventory().CreateInInventory("Lockpick");
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("AKM");							// Weapon
		gun.GetInventory().CreateAttachment("AK_RailHndgrd");								// Weapon Attachment 
		ItemBase gunlight = gun.GetInventory().CreateAttachment("UniversalLight");					// Weapon Attachment (Universal Light)
		gunlight.GetInventory().CreateAttachment("Battery9V");								//     Add battery to Universal Light
		addMags(player, "Mag_AKM_30Rnd", 4);										// Magazines
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());			// Melee
				
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}

// Team3 Loadout
	EntityAI Team3LoadOut(PlayerBase player) 
	{
		ref TStringArray hatArray = {"BallisticHelmet_Black"};
		ref TStringArray topArray = {"M65Jacket_Black"};
		ref TStringArray pantsArray = {"CargoPants_Black"};	
		ref TStringArray vestArray  = {"HighCapacityVest_Black"};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"MilitaryBoots_Black"};	
		ref TStringArray maskArray = {"BalaclavaMask_Blackskull"};	
		ref TStringArray glovesArray = {"TacticalGloves_Black"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {""};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("AKS74U");				// Weapon
		addMags(player, "Mag_AK74_30Rnd", 2);								// Magazines
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());	// Melee
		
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}

// Team4 Loadout
	EntityAI Team4LoadOut(PlayerBase player) 
	{
		ref TStringArray hatArray = {"BaseballCap_CMMG_Pink","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Blue"};
		ref TStringArray topArray = {"Sweater_Red","Sweater_Blue","Sweater_Gray","Sweater_Green"};
		ref TStringArray pantsArray = {"Jeans_Blue","Jeans_BlueDark","Jeans_Grey","Jeans_Brown","Jeans_Black","Jeans_Green"};	
		ref TStringArray vestArray  = {""};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"CombatBoots_Grey","CombatBoots_Beige","CombatBoots_Brown","CombatBoots_Black","CombatBoots_Green"};	
		ref TStringArray maskArray = {""};	
		ref TStringArray glovesArray = {"WorkingGloves_Brown"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {"DryBag_Yellow","DryBag_Orange","DryBag_Red","DryBag_Blue","DryBag_Black","DryBag_Green"};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("AKS74U");				// Weapon
		addMags(player, "Mag_AK74_30Rnd", 2);								// Magazines
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());	// Melee
		
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}

// Team5 Loadout
	EntityAI Team5LoadOut(PlayerBase player) 
	{
		ref TStringArray hatArray = {"BaseballCap_CMMG_Pink","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Blue"};
		ref TStringArray topArray = {"Sweater_Red","Sweater_Blue","Sweater_Gray","Sweater_Green"};
		ref TStringArray pantsArray = {"Jeans_Blue","Jeans_BlueDark","Jeans_Grey","Jeans_Brown","Jeans_Black","Jeans_Green"};	
		ref TStringArray vestArray  = {""};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"CombatBoots_Grey","CombatBoots_Beige","CombatBoots_Brown","CombatBoots_Black","CombatBoots_Green"};	
		ref TStringArray maskArray = {""};	
		ref TStringArray glovesArray = {"WorkingGloves_Brown"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {"DryBag_Yellow","DryBag_Orange","DryBag_Red","DryBag_Blue","DryBag_Black","DryBag_Green"};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("AKS74U");				// Weapon
		addMags(player, "Mag_AK74_30Rnd", 2);								// Magazines
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());	// Melee
		
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}
	
// Team6 Loadout
	EntityAI Team6LoadOut(PlayerBase player)
	{
		ref TStringArray hatArray = {"BallisticHelmet_Black"};
		ref TStringArray topArray = {"M65Jacket_Black"};
		ref TStringArray pantsArray = {"CargoPants_Black"};	
		ref TStringArray vestArray  = {"HighCapacityVest_Black"};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"MilitaryBoots_Black"};	
		ref TStringArray maskArray = {"BalaclavaMask_Blackskull"};	
		ref TStringArray glovesArray = {"TacticalGloves_Black"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {""};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		player.GetInventory().CreateInInventory("Lockpick");
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("AKM");					// Weapon
		gun.GetInventory().CreateAttachment("AK_RailHndgrd");						// Weapon Attachment (Handguard)
		ItemBase gunlight = gun.GetInventory().CreateAttachment("UniversalLight");			// Weapon Attachment (Universal Light)
		gunlight.GetInventory().CreateAttachment("Battery9V");						//     Add battery to Universal Light
		addMags(player, "Mag_AKM_30Rnd", 4);								// Magazines
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());	// Melee
				
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}
		
// Team7 Loadout
	EntityAI Team7LoadOut(PlayerBase player)
	{
		ref TStringArray hatArray = {"BaseballCap_CMMG_Pink","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Blue"};
		ref TStringArray topArray = {"Sweater_Red","Sweater_Blue","Sweater_Gray","Sweater_Green"};
		ref TStringArray pantsArray = {"Jeans_Blue","Jeans_BlueDark","Jeans_Grey","Jeans_Brown","Jeans_Black","Jeans_Green"};	
		ref TStringArray vestArray  = {""};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"CombatBoots_Grey","CombatBoots_Beige","CombatBoots_Brown","CombatBoots_Black","CombatBoots_Green"};	
		ref TStringArray maskArray = {""};	
		ref TStringArray glovesArray = {"WorkingGloves_Brown"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {"DryBag_Yellow","DryBag_Orange","DryBag_Red","DryBag_Blue","DryBag_Black","DryBag_Green"};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		player.GetInventory().CreateInInventory("AmmoBox_762x54_20Rnd");
		player.GetInventory().CreateInInventory("AmmoBox_762x54_20Rnd");
		player.GetInventory().CreateInInventory("AmmoBox_762x54_20Rnd");
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("Mosin9130_Black");							// Weapon
		gun.GetInventory().CreateAttachment("AK_RailHndgrd");								// Weapon Attachment 
		ItemBase gunlight = gun.GetInventory().CreateAttachment("");					// Weapon Attachment (Universal Light)
		gunlight.GetInventory().CreateAttachment("");								//     Add battery to Universal Light
		addMags(player, "", 4);										// Magazines
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());			// Melee
				
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}
		
// Team8 Loadout
	EntityAI Team8LoadOut(PlayerBase player)
	{
		ref TStringArray hatArray = {"BallisticHelmet_Black"};
		ref TStringArray topArray = {"M65Jacket_Black"};
		ref TStringArray pantsArray = {"CargoPants_Black"};	
		ref TStringArray vestArray  = {"HighCapacityVest_Black"};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"MilitaryBoots_Black"};	
		ref TStringArray maskArray = {"BalaclavaMask_Blackskull"};	
		ref TStringArray glovesArray = {"TacticalGloves_Black"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {""};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		player.GetInventory().CreateInInventory("Lockpick");
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("AKM");							// Weapon
		gun.GetInventory().CreateAttachment("AK_RailHndgrd");								// Weapon Attachment 
		ItemBase gunlight = gun.GetInventory().CreateAttachment("UniversalLight");					// Weapon Attachment (Universal Light)
		gunlight.GetInventory().CreateAttachment("Battery9V");								//     Add battery to Universal Light
		addMags(player, "Mag_AKM_30Rnd", 4);										// Magazines
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());			// Melee
				
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}

// Team9 Loadout
	EntityAI Team9LoadOut(PlayerBase player) 
	{
		ref TStringArray hatArray = {"BaseballCap_CMMG_Pink","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Blue"};
		ref TStringArray topArray = {"Sweater_Red","Sweater_Blue","Sweater_Gray","Sweater_Green"};
		ref TStringArray pantsArray = {"Jeans_Blue","Jeans_BlueDark","Jeans_Grey","Jeans_Brown","Jeans_Black","Jeans_Green"};	
		ref TStringArray vestArray  = {""};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"CombatBoots_Grey","CombatBoots_Beige","CombatBoots_Brown","CombatBoots_Black","CombatBoots_Green"};	
		ref TStringArray maskArray = {""};	
		ref TStringArray glovesArray = {"WorkingGloves_Brown"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {"DryBag_Yellow","DryBag_Orange","DryBag_Red","DryBag_Blue","DryBag_Black","DryBag_Green"};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("AKS74U");				// Weapon
		addMags(player, "Mag_AK74_30Rnd", 2);								// Magazines
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());	// Melee
		
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}

// Team10 Loadout
	EntityAI Team10LoadOut(PlayerBase player) 
	{
		ref TStringArray hatArray = {"BaseballCap_CMMG_Pink","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Blue"};
		ref TStringArray topArray = {"Sweater_Red","Sweater_Blue","Sweater_Gray","Sweater_Green"};
		ref TStringArray pantsArray = {"Jeans_Blue","Jeans_BlueDark","Jeans_Grey","Jeans_Brown","Jeans_Black","Jeans_Green"};	
		ref TStringArray vestArray  = {""};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"CombatBoots_Grey","CombatBoots_Beige","CombatBoots_Brown","CombatBoots_Black","CombatBoots_Green"};	
		ref TStringArray maskArray = {""};	
		ref TStringArray glovesArray = {"WorkingGloves_Brown"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {"DryBag_Yellow","DryBag_Orange","DryBag_Red","DryBag_Blue","DryBag_Black","DryBag_Green"};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("AKS74U");				// Weapon
		addMags(player, "Mag_AK74_30Rnd", 2);								// Magazines
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());	// Melee
		
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}
	
// No ID Loadout (Default Loadout)
	EntityAI randomLoadOut(PlayerBase player) 
	{
		ref TStringArray hatArray = {"BaseballCap_CMMG_Pink","BaseballCap_Pink","BaseballCap_Red"};
		ref TStringArray topArray = {"Sweater_Red","Sweater_Blue","Sweater_Gray","Sweater_Green"};
		ref TStringArray pantsArray = {"Jeans_Blue","Jeans_BlueDark","Jeans_Grey","Jeans_Brown","Jeans_Black","Jeans_Green"};	
		ref TStringArray vestArray  = {""};	
		ref TStringArray glassesArray = {""};
		ref TStringArray shoesArray = {"CombatBoots_Grey","CombatBoots_Beige","CombatBoots_Brown","CombatBoots_Black","CombatBoots_Green"};	
		ref TStringArray maskArray = {""};	
		ref TStringArray glovesArray = {"WorkingGloves_Brown"};		
		ref TStringArray foodArray = {"BakedBeansCan"};
		ref TStringArray drinkArray = {"SodaCan_Cola"};
		ref TStringArray backpackArray = {"DryBag_Yellow","DryBag_Orange","DryBag_Red","DryBag_Blue","DryBag_Black","DryBag_Green"};
		ref TStringArray knifeArray  = {"HuntingKnife"};
		ref TStringArray meleeArray = {"FirefighterAxe"};

		player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
		player.GetInventory().CreateInInventory(topArray.GetRandomElement());
		player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
		player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
		player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
		player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
		player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
		player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);
		ItemBase light = player.GetInventory().CreateInInventory("Flashlight");
		light.GetInventory().CreateAttachment("Battery9V");
		EntityAI gun = player.GetInventory().CreateInInventory("AKS74U");  				// Weapon
		addMags(player, "Mag_AK74_30Rnd", 2); 								// Magazines								
		ItemBase melee = player.GetInventory().CreateInInventory(meleeArray.GetRandomElement());	// Melee
		
		player.SetQuickBarEntityShortcut(gun, 0, true);
		player.SetQuickBarEntityShortcut(melee, 1, true);
		return gun;
	}
	
	// DO NOT Edit anything Below This Line 
	
	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		player.RemoveAllItems();
					
		if (Team1.Find(GetUserID(player)) != -1 || Team1.Find(GetUserSteamID(player)) != -1 ) {		
			Team1LoadOut(player);
		} else if (Team2.Find(GetUserID(player)) != -1 || Team2.Find(GetUserSteamID(player)) != -1 ) { 		
			Team2LoadOut(player);				
		} else if (Team3.Find(GetUserID(player)) != -1 || Team3.Find(GetUserSteamID(player)) != -1 ) { 		
			Team3LoadOut(player);				
		} else if (Team4.Find(GetUserID(player)) != -1 || Team4.Find(GetUserSteamID(player)) != -1 ) { 		
			Team4LoadOut(player);	
		} else if (Team5.Find(GetUserID(player)) != -1 || Team5.Find(GetUserSteamID(player)) != -1 ) { 		
			Team5LoadOut(player);				
		} else if (Team6.Find(GetUserID(player)) != -1 || Team6.Find(GetUserSteamID(player)) != -1 ) { 		
			Team6LoadOut(player);				
		} else if (Team7.Find(GetUserID(player)) != -1 || Team7.Find(GetUserSteamID(player)) != -1 ) { 		
			Team7LoadOut(player);				
		} else if (Team8.Find(GetUserID(player)) != -1 || Team8.Find(GetUserSteamID(player)) != -1 ) { 		
			Team8LoadOut(player);				
		} else if (Team9.Find(GetUserID(player)) != -1 || Team9.Find(GetUserSteamID(player)) != -1 ) { 		
			Team9LoadOut(player);	
		} else if (Team10.Find(GetUserID(player)) != -1 || Team10.Find(GetUserSteamID(player)) != -1 ) { 		
			Team10LoadOut(player);				
		} else {
			randomLoadOut(player);	
		}
	}
	
		string GetUserID(PlayerBase player)
    {
        if ( player.GetIdentity() )
            return player.GetIdentity().GetPlainId();
        
        return "OFFLINE";
    }

    string GetUserSteamID(PlayerBase player)
    {
        if ( player.GetIdentity() )
            return player.GetIdentity().GetId();
        
        return "OFFLINE";
    }

};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}
