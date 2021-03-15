#ifndef _LANGUAGE_JP_H_
#define _LANGUAGE_JP_H_

    // config.ini Parameter Settings / Feature Settings
    #define STRING_STATUS_SCREEN          "Enable Status Screen"
    #define STRING_BAUDRATE               "ポートレート"
    #define STRING_LANGUAGE               "日本語"
    #define STRING_ROTATE_UI              "回転UI"
    #define STRING_TERMINAL_ACK           "端末でACKを表示する"
    #define STRING_PERSISTENT_INFO        "永続的なステータス情報"
    #define STRING_FILE_LIST_MODE         "ファイルビューアリストモード"
    #define STRING_ACK_NOTIFICATION       "ACK notification style"
    #define STRING_EMULATE_M600           "Emulate M600"
    #define STRING_SERIAL_ALWAYS_ON       "Serial Always ON"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
    #define STRING_MARLIN_FULLSCREEN      "フルスクリーンでマーリンモード"
    #define STRING_MARLIN_TYPE            "Marlin Mode Type"
    #define STRING_MOVE_SPEED             "移動速度(X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto Save Load Leveling"
    #define STRING_FAN_SPEED_PERCENT      "Fan Speed As Percentage"
    #define STRING_XY_OFFSET_PROBING      "XY Offset Probing Support"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Steppers Auto-Alignment"
    #define STRING_PS_ON                  "オートパワー"
    #define STRING_FIL_RUNOUT             "フィラメントセンサ"
    #define STRING_PL_RECOVERY_EN         "Power loss recovery"
    #define STRING_PL_RECOVERY_HOME       "Power Loss Recovery Homing"
    #define STRING_BTT_MINI_UPS           "BTT UPS Support"
    #define STRING_TOUCH_SOUND            "Touch sounds"
    #define STRING_TOAST_SOUND            "Toast Notifications"
    #define STRING_ALERT_SOUND            "Popups and Alerts"
    #define STRING_HEATER_SOUND           "Heater notification"
    #define STRING_KNOB_LED_COLOR         "回転ノブLED"
    #define STRING_KNOB_LED_IDLE          "Rotary Knob LED idle"
    #define STRING_LCD_BRIGHTNESS         "LCD明るさ"
    #define STRING_LCD_IDLE_BRIGHTNESS    "LCDの輝度が薄暗い"
    #define STRING_LCD_IDLE_DELAY         "LCD調光アイドルタイマー"
    #define STRING_START_GCODE_ENABLED    "印刷前にGコードを開始する"
    #define STRING_END_GCODE_ENABLED      "印刷後にGコードを終了する"
    #define STRING_CANCEL_GCODE_ENABLED   "Gコードをキャンセルする"

    // Machine Parameter Settings
    #define STRING_STEPS_SETTING          "MMあたりのステップ"
    #define STRING_MAXFEEDRATE            "マックスフィード率"
    #define STRING_MAXACCELERATION        "最大加速度"
    #define STRING_ACCELERATION           "加速度"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_HOME_OFFSET            "Home Offset"
    #define STRING_FWRETRACT              "FW Retraction"
    #define STRING_FWRECOVER              "FW Retraction Recover"
    #define STRING_RETRACT_AUTO           "Auto Firmware Retract"
    #define STRING_HOTEND_OFFSET          "Offset 2nd Nozzle"
    #define STRING_PROBE_OFFSET           "プローブオフセット"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_FILAMENT_SETTING       "Filament Diameter"
    #define STRING_CURRENT_SETTING        "ドライバー電流 (mA)"
    #define STRING_BUMP_SENSITIVITY       "TMC バンプ感度"
    #define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_PRINT_ACCELERATION     "印刷加速度"
    #define STRING_RETRACT_ACCELERATION   "引き戻し加速度"
    #define STRING_TRAVEL_ACCELERATION    "空振り加速度"
    #define STRING_RETRACT_LENGTH         "引き戻し長さ"
    #define STRING_RETRACT_SWAP_LENGTH    "交換時の引き戻し長さ"
    #define STRING_RETRACT_FEEDRATE       "引き戻し速度"
    #define STRING_RETRACT_Z_LIFT         "引き戻し時のz軸上げの高さ"
    #define STRING_RECOVER_LENGTH         "余分な押し出し長さ"
    #define STRING_SWAP_RECOVER_LENGTH    "交換時の余分な押し出し長さ"
    #define STRING_RECOVER_FEEDRATE       "押出速度"
    #define STRING_SWAP_RECOVER_FEEDRATE  "交換時の押出速度"
    #define STRING_MBL_OFFSET             "MBL Offset"

    // Save / Load
    #define STRING_SAVE                   "保存"
    #define STRING_RESTORE                "Restore"
    #define STRING_RESET                  "リセット"
    #define STRING_EEPROM_SAVE_INFO       "プリンタの設定をEEPROMに保存しますか?"
    #define STRING_EEPROM_RESTORE_INFO    "EEPROMから設定を再読み込み?"
    #define STRING_EEPROM_RESET_INFO      "Reset EEPROM to stock printer settings?"
    #define STRING_SETTINGS_SAVE          "Save settings"
    #define STRING_SETTINGS_RESTORE       "設定を復元する"
    #define STRING_SETTINGS_RESET         "設定をリセットする"
    #define STRING_SETTINGS_RESET_INFO    "すべての設定をデフォルト値にリセットしますか?"
    #define STRING_SETTINGS_RESET_DONE    "すべての設定が正常にリセットされました。デバイスを再起動してください。"

    // Navigation Buttons
    #define STRING_PAGE_UP                "前ページ"
    #define STRING_PAGE_DOWN              "次ページ"
    #define STRING_UP                     "Up"
    #define STRING_DOWN                   "Down"
    #define STRING_NEXT                   "Next"
    #define STRING_BACK                   "戻る"

    // Value Buttons
    #define STRING_INC                    "増え"
    #define STRING_DEC                    "減る"
    #define STRING_LOAD                   "増え"
    #define STRING_UNLOAD                 "減る"
    #define STRING_ON                     "ON"
    #define STRING_OFF                    "OFF"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "スマート"
    #define STRING_SLOW                   "ゆっくり"
    #define STRING_NORMAL                 "正常速度"
    #define STRING_FAST                   "早め"
    #define STRING_ZERO                   "ゼロ"
    #define STRING_HALF                   "50%速さ"
    #define STRING_FULL                   "全速"
    #define STRING_CUSTOM                 "カスタム"
    #define STRING_CLEAR                  "Clear"
    #define STRING_DEFAULT                "Default"

    // Action Buttons
    #define STRING_START                  "Start"
    #define STRING_STOP                   "停止"
    #define STRING_PAUSE                  "一時停止"
    #define STRING_RESUME                 "続ける"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "データ接続"
    #define STRING_SHUT_DOWN              "シャットダウン"
    #define STRING_FORCE_SHUT_DOWN        "フォース"
    #define STRING_EMERGENCYSTOP          "EM.停止"
    #define STRING_PREHEAT                "予熱する"
    #define STRING_PREHEAT_BOTH           "両方"
    #define STRING_COOLDOWN               "クールダウン"

    // Dialog Buttons
    #define STRING_CONFIRM                "OK"
    #define STRING_CANCEL                 "キャンセル"
    #define STRING_WARNING                "注意"
    #define STRING_CONTINUE               "継続"
    #define STRING_CONFIRMATION           "Are you sure?"

    // Process Status
    #define STRING_STATUS                 "状態"
    #define STRING_READY                  "準備中"
    #define STRING_BUSY                   "ビジー状態、しばらくお待ちください..."
    #define STRING_LOADING                "ロッド中..."
    #define STRING_UNCONNECTED            "プリンターに連続していない!"

    // Process Info
    #define STRING_INFO                   "情報"
    #define STRING_INVALID_VALUE          "Invalid value(s)"
    #define STRING_TIMEOUT_REACHED        "Timeout reached!"
    #define STRING_DISCONNECT_INFO        "SDカード　PC両用"
    #define STRING_SHUTTING_DOWN          "シャットダウン..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "ホットエンドの温度が%d℃未満になるまで待ちます。" // Wait for the temperature of hotend to be lower than 50℃
    #define STRING_POWER_FAILED           "プリントを継続しますか?"
    #define STRING_PROCESS_RUNNING        "Process already running!"
    #define STRING_PROCESS_COMPLETED      "Process completed!"
    #define STRING_PROCESS_ABORTED        "Process aborted!"

    // TFT SD, U_DISK, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "TFT SD"
    #define STRING_READ_TFTSD_ERROR       "TFT SDカードの読み取りがエラー発生しました!"
    #define STRING_TFTSD_INSERTED         "SDカード入りました!"
    #define STRING_TFTSD_REMOVED          "SDカード出しました!"
    #define STRING_U_DISK                 "USBメモリー"
    #define STRING_READ_U_DISK_ERROR      "USBメモリー読み込みエラー!"
    #define STRING_U_DISK_INSERTED        "U Diskカード入りました!"
    #define STRING_U_DISK_REMOVED         "U Diskカード出しました!"
    #define STRING_ONBOARDSD              "内部 mSDカード"
    #define STRING_READ_ONBOARDSD_ERROR   "内部 mSDカードの読み取りがエラー発生しました!"
    #define STRING_FILAMENT_RUNOUT        "フィラメントランアウト!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Disarm All"
    #define STRING_XY_UNLOCK              "Disarm XY"

    #define STRING_START_PRINT            "印刷を開始する:\n %s?"
    #define STRING_STOP_PRINT             "プリントを中止しますか?"
    #define STRING_IS_PAUSE               "印刷時に押し出すことができない。印刷を中止しますか？"
    #define STRING_M0_PAUSE               "MOコマンドで一時停止"

    #define STRING_TEST                   "テスト"
    #define STRING_DEPLOY                 "展開"
    #define STRING_STOW                   "収納"
    #define STRING_REPEAT                 "繰り返す"

    // Printer Tools
    #define STRING_NOZZLE                 "ノズル"
    #define STRING_BED                    "ベッド"
    #define STRING_CHAMBER                "Chamber"
    #define STRING_FAN                    "ファン"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0.01mm"
    #define STRING_01_MM                  "0.1mm"
    #define STRING_1_MM                   "1mm"
    #define STRING_5_MM                   "5mm"
    #define STRING_10_MM                  "10mm"
    #define STRING_100_MM                 "100mm"
    #define STRING_200_MM                 "200mm"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"

    #define STRING_5_SECONDS              "5 Sec."
    #define STRING_10_SECONDS             "10 Sec."
    #define STRING_30_SECONDS             "30 Sec."
    #define STRING_60_SECONDS             "1 Min."
    #define STRING_120_SECONDS            "2 Min."
    #define STRING_300_SECONDS            "5 Min."

    // Colors
    #define STRING_WHITE                  "白色"
    #define STRING_BLACK                  "黒色"
    #define STRING_BLUE                   "青色"
    #define STRING_RED                    "赤色"
    #define STRING_GREEN                  "緑色"
    #define STRING_CYAN                   "シアン"
    #define STRING_YELLOW                 "黄色"
    #define STRING_BROWN                  "茶色"
    #define STRING_GRAY                   "灰色"
    #define STRING_ORANGE                 "オレンジ"
    #define STRING_INDIGO                 "インディゴ"
    #define STRING_VIOLET                 "バイオレット"
    #define STRING_MAGENTA                "赤紫色"
    #define STRING_PURPLE                 "紫"
    #define STRING_LIME                   "ライム"
    #define STRING_DARKBLUE               "濃紺"
    #define STRING_DARKGREEN              "ダークグリーン"
    #define STRING_DARKGRAY               "暗灰色"

    // Menus
    #define STRING_HEAT                   "あたため"
    #define STRING_MOVE                   "移動"
    #define STRING_HOME                   "ゼロにする"
    #define STRING_PRINT                  "プリント"
    #define STRING_EXTRUDE                "押出"
    #define STRING_SETTINGS               "設定"
    #define STRING_SCREEN_SETTINGS        "画面"
    #define STRING_MACHINE_SETTINGS       "マシン"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_FEATURE_SETTINGS       "機能"
    #define STRING_SOUND                  "Sound"
    #define STRING_RGB_SETTINGS           "LED カラー"
    #define STRING_RGB_OFF                "LED オフ"
    #define STRING_TERMINAL               "端末"
    #define STRING_LEVELING               "レベリング"
    #define STRING_POINT_1                "ポイント1"
    #define STRING_POINT_2                "ポイント2"
    #define STRING_POINT_3                "ポイント3"
    #define STRING_POINT_4                "ポイント4"
    #define STRING_POINT_5                "ポイント5"
    #define STRING_BED_LEVELING           "Bed Level"
    #define STRING_BL_COMPLETE            "Bed Leveling Complete"
    #define STRING_BL_SMART_FILL          "Missing probe points\nhave been smart filled.\n \nNote: remember to save!"
    #define STRING_BL_ENABLE              "BL: on"
    #define STRING_BL_DISABLE             "BL: off"
    #define STRING_ABL                    "自動調整"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Mesh Bed Leveling"
    #define STRING_ABL_SETTINGS           "Auto Bed Leveling"
    #define STRING_ABL_SETTINGS_BBL       "Bilinear Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL       "Unified Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Save to slot"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Load from slot"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Remember slot for next\nreboot? (Save EEPROM)"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_P_OFFSET               "P Offset"
    #define STRING_H_OFFSET               "H Offset"
    #define STRING_DISTANCE               "Distance"
    #define STRING_LOAD_UNLOAD            "Load/Unload"  // needs translation
    #define STRING_LOAD_UNLOAD_SHORT      "(Un)Load"  // needs translation
    #define STRING_TOUCHSCREEN_ADJUST     "校正する"
    #define STRING_MORE                   "詳細"
    #define STRING_SCREEN_INFO            "ついて"
    #define STRING_BG_COLOR               "背景色"
    #define STRING_FONT_COLOR             "フォントの色"
    #define STRING_PERCENTAGE             "パーセント"
    #define STRING_PERCENTAGE_SPEED       "スビード"
    #define STRING_PERCENTAGE_FLOW        "押出"
    #define STRING_BABYSTEP               "ベビーステップ"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "タッチスクリーン較正"
    #define STRING_ADJUST_INFO            "赤星をタッチ"
    #define STRING_ADJUST_OK              "校正が成功しました"
    #define STRING_ADJUST_FAILED          "校正が失敗しました、も一度お試して下さい"
    #define STRING_UNIFIEDMOVE            "移動"
    #define STRING_UNIFIEDHEAT            "ヒート&ファン"
    #define STRING_TOUCH_TO_EXIT          "クリックして終了します"
    #define STRING_MAINMENU               "メニュー"
    #define STRING_PARAMETER_SETTING      "パラメータ"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_LEVELING_EDGE_DISTANCE "Bed edge distance"
    #define STRING_TUNING                 "Tuning"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID autotune"
    #define STRING_PID_START_INFO         "PID autotune may take\nsome time to complete.\nContinue?"
    #define STRING_PID_START_INFO_2       "PID autotune in progress!"
    #define STRING_PID_START_INFO_3       "Do not touch the screen until completed (green LED ON)!"
    #define STRING_TUNE_EXTRUDER          "Tune steps"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Ext. 100mm"
    #define STRING_TUNE_EXT_TEMP          "Extruder tuning | Heat"
    #define STRING_TUNE_EXT_TEMPLOW       "Desired temperature too low!\nMinimum temperature: %d C"
    #define STRING_TUNE_EXT_DESIREDVAL    "Temperature is not yet at the desired value"
    #define STRING_TUNE_EXT_MARK120MM     "Mark 120 mm on your fillament\nPress '%s' when ready\nMeasure remaining length\nafter extruding"
    #define STRING_TUNE_EXT_HEATOFF       "Turn the heater off?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Adjust E-Steps"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "New E-steps saved!\nDon't forget to\nsave it in EEPROM\nNew value: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Length remaining:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Old e-steps: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "New e-steps: %0.2f"
    #define STRING_CONNECTION_SETTINGS    "Connection"
    #define STRING_NOTIFICATIONS          "Notifications"
    #define STRING_MESH_EDITOR            "Mesh edit"
    #define STRING_MESH_TUNER             "Mesh tuner"
    #define STRING_CASE_LIGHT             "Case light"
    #define STRING_LOAD_STARTED           "Loading filament.\nPlease wait for the process\nto complete."  // translation needed
    #define STRING_UNLOAD_STARTED         "Unloading filament.\nPlease wait for the process\nto complete."  // translation needed
    #define STRING_HEATERS_ON             "Some heaters are still ON.\nDo you want to stop them?"  // translation needed
    #define STRING_PRINT_FINISHED         "   Print\n   finished"
    #define STRING_MAIN_SCREEN            "Main"
    #define STRING_PREVIOUS_PRINT_DATA    "Brief"
    #define STRING_PRINT_TIME             "Print Time: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nFilament length: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nFilament weight: %1.2fg"
    #define STRING_FILAMENT_COST          "\nFilament cost: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nFilament data not available."
    #define STRING_CLICK_FOR_MORE         "Click for summary"
    #define STRING_EXT_TEMPLOW            "Hotend temperature is below\nminimum temperature (%d℃)."
    #define STRING_HEAT_HOTEND            "Heat hotend to %d℃?"
    #define STRING_Z_ALIGN                "Z Align"
    #define STRING_MACROS                 "Macros"
    #define STRING_TEST_LEVEL_VALID       "Mesh Validation"
    #define STRING_TEST_LEVEL_PLA         "Valid pla"
    #define STRING_TEST_LEVEL_ABS         "Valid abs"
    #define STRING_TEST_LEVEL_petg        "Valid petg"
    #define STRING_TEST_LEVEL_ASA         "Valid asa"
    


#endif
