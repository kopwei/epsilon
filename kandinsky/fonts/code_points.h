#ifndef KANDINSKY_FONTS_CODE_POINTS_H
#define KANDINSKY_FONTS_CODE_POINTS_H

// [0x30a].map{|i| "0x" + i.to_s(16) +", // " + [i].pack("U") + " // " + Unicode::Name.of([i].pack("U"))}.join("|")
#include <stdint.h>


/* This array lists the code points that are rasterized by rasterizer.c. We put
 * most characters from the LATIN charset, and some mathematical characters. */

uint32_t CodePoints[] = {
  0x20, //   // SPACE
  0x21, // ! // EXCLAMATION MARK
  0x22, // " // QUOTATION MARK
  0x23, // # // NUMBER SIGN
  0x24, // $ // DOLLAR SIGN
  0x25, // % // PERCENT SIGN
  0x26, // & // AMPERSAND
  0x27, // ' // APOSTROPHE
  0x28, // ( // LEFT PARENTHESIS
  0x29, // ) // RIGHT PARENTHESIS
  0x2a, // * // ASTERISK
  0x2b, // + // PLUS SIGN
  0x2c, // , // COMMA
  0x2d, // - // HYPHEN-MINUS
  0x2e, // . // FULL STOP
  0x2f, // / // SOLIDUS
  0x30, // 0 // DIGIT ZERO
  0x31, // 1 // DIGIT ONE
  0x32, // 2 // DIGIT TWO
  0x33, // 3 // DIGIT THREE
  0x34, // 4 // DIGIT FOUR
  0x35, // 5 // DIGIT FIVE
  0x36, // 6 // DIGIT SIX
  0x37, // 7 // DIGIT SEVEN
  0x38, // 8 // DIGIT EIGHT
  0x39, // 9 // DIGIT NINE
  0x3a, // : // COLON
  0x3b, // ; // SEMICOLON
  0x3c, // < // LESS-THAN SIGN
  0x3d, // = // EQUALS SIGN
  0x3e, // > // GREATER-THAN SIGN
  0x3f, // ? // QUESTION MARK
  0x40, // @ // COMMERCIAL AT
  0x41, // A // LATIN CAPITAL LETTER A
  0x42, // B // LATIN CAPITAL LETTER B
  0x43, // C // LATIN CAPITAL LETTER C
  0x44, // D // LATIN CAPITAL LETTER D
  0x45, // E // LATIN CAPITAL LETTER E
  0x46, // F // LATIN CAPITAL LETTER F
  0x47, // G // LATIN CAPITAL LETTER G
  0x48, // H // LATIN CAPITAL LETTER H
  0x49, // I // LATIN CAPITAL LETTER I
  0x4a, // J // LATIN CAPITAL LETTER J
  0x4b, // K // LATIN CAPITAL LETTER K
  0x4c, // L // LATIN CAPITAL LETTER L
  0x4d, // M // LATIN CAPITAL LETTER M
  0x4e, // N // LATIN CAPITAL LETTER N
  0x4f, // O // LATIN CAPITAL LETTER O
  0x50, // P // LATIN CAPITAL LETTER P
  0x51, // Q // LATIN CAPITAL LETTER Q
  0x52, // R // LATIN CAPITAL LETTER R
  0x53, // S // LATIN CAPITAL LETTER S
  0x54, // T // LATIN CAPITAL LETTER T
  0x55, // U // LATIN CAPITAL LETTER U
  0x56, // V // LATIN CAPITAL LETTER V
  0x57, // W // LATIN CAPITAL LETTER W
  0x58, // X // LATIN CAPITAL LETTER X
  0x59, // Y // LATIN CAPITAL LETTER Y
  0x5a, // Z // LATIN CAPITAL LETTER Z
  0x5b, // [ // LEFT SQUARE BRACKET
  0x5c, // \ // REVERSE SOLIDUS
  0x5d, // ] // RIGHT SQUARE BRACKET
  0x5e, // ^ // CIRCUMFLEX ACCENT
  0x5f, // _ // LOW LINE
  0x60, // ` // GRAVE ACCENT
  0x61, // a // LATIN SMALL LETTER A
  0x62, // b // LATIN SMALL LETTER B
  0x63, // c // LATIN SMALL LETTER C
  0x64, // d // LATIN SMALL LETTER D
  0x65, // e // LATIN SMALL LETTER E
  0x66, // f // LATIN SMALL LETTER F
  0x67, // g // LATIN SMALL LETTER G
  0x68, // h // LATIN SMALL LETTER H
  0x69, // i // LATIN SMALL LETTER I
  0x6a, // j // LATIN SMALL LETTER J
  0x6b, // k // LATIN SMALL LETTER K
  0x6c, // l // LATIN SMALL LETTER L
  0x6d, // m // LATIN SMALL LETTER M
  0x6e, // n // LATIN SMALL LETTER N
  0x6f, // o // LATIN SMALL LETTER O
  0x70, // p // LATIN SMALL LETTER P
  0x71, // q // LATIN SMALL LETTER Q
  0x72, // r // LATIN SMALL LETTER R
  0x73, // s // LATIN SMALL LETTER S
  0x74, // t // LATIN SMALL LETTER T
  0x75, // u // LATIN SMALL LETTER U
  0x76, // v // LATIN SMALL LETTER V
  0x77, // w // LATIN SMALL LETTER W
  0x78, // x // LATIN SMALL LETTER X
  0x79, // y // LATIN SMALL LETTER Y
  0x7a, // z // LATIN SMALL LETTER Z
  0x7b, // { // LEFT CURLY BRACKET
  0x7c, // | // VERTICAL LINE
  0x7d, // } // RIGHT CURLY BRACKET
  0x7e, // ~ // TILDE

  0xb0, // ° // DEGREE SIGN
  0xb7, // · // MIDDLE DOT

  0xc6, // Æ // LATIN CAPITAL LETTER AE
  0xd0, // Ð // LATIN CAPITAL LETTER ETH
  0xd7, // × // MULTIPLICATION SIGN
  0xd8, // Ø // LATIN CAPITAL LETTER O WITH STROKE
  0xde, // Þ // LATIN CAPITAL LETTER THORN
  0xdf, // ß // LATIN SMALL LETTER SHARP S
  0xe6, // æ // LATIN SMALL LETTER AE
  0xf0, // ð // LATIN SMALL LETTER ETH
  0xf7, // ÷ // DIVISION SIGN
  0xf8, // ø // LATIN SMALL LETTER O WITH STROKE
  0xfe, // þ // LATIN SMALL LETTER THORN

  0x300, //  ̀ // COMBINING GRAVE ACCENT
  0x301, //  ́ // COMBINING ACUTE ACCENT
  0x302, //  ̂ // COMBINING CIRCUMFLEX ACCENT
  0x303, //  ̃ // COMBINING TILDE
  0x305, //  ̅ // COMBINING OVERLINE
  0x308, //  ̈ // COMBINING DIAERESIS
  0x30a, //  ̊ // COMBINING RING ABOVE
  0x327, //  ̧ // COMBINING CEDILLA

  0x393,   // Γ // GREEK CAPITAL LETTER GAMMA
  0x394,   // Δ // GREEK CAPITAL LETTER DELTA
  0x3a9,   // Ω // GREEK CAPITAL LETTER OMEGA
  0x3b8,   // θ // GREEK SMALL LETTER THETA
  0x3bb,   // λ // GREEK SMALL LETTER LAMDA
  0x3bc,   // μ // GREEK SMALL LETTER MU
  0x3c0,   // π // GREEK SMALL LETTER PI
  0x3c3,   // σ // GREEK SMALL LETTER SIGMA
  0x1d07,  // ᴇ // LATIN LETTER SMALL CAPITAL E
  0x212f,  // ℯ // SCRIPT SMALL E
  0x2192,  // → // RIGHTWARDS ARROW
  0x2211,  // ∑ // N-ARY SUMMATION
  0x221a,  // √ // SQUARE ROOT
  0x222b,  // ∫ // INTEGRAL
  0x2248,  // ≈ // ALMOST EQUAL TO
  0x2264,  // ≤ // LESS-THAN OR EQUAL TO
  0x2265,  // ≥ // GREATER-THAN OR EQUAL TO
  0x4e00,  // 一 //
  0x4e0b,  // 下 //
  0x4e0d,  // 不 //
  0x4e2a,  // 个 //
  0x4e2d,  // 中 //
  0x4e3a,  // 为 //
  0x4e49,  // 义 //
  0x4e8c,  // 二 //
  0x4e8e,  // 于 //
  0x4eae,  // 亮 //
  0x4ed1,  // 仑 //
  0x4ee5,  // 以 //
  0x4ef6,  // 件 //
  0x4efb,  // 任 //
  0x4f0f,  // 伏 //
  0x4f1a,  // 会 //
  0x4f20,  // 传 //
  0x4f4d,  // 位 //
  0x4f4e,  // 低 //
  0x4f53,  // 体 //
  0x4f55,  // 何 //
  0x4f60,  // 你 //
  0x4f7f,  // 使 //
  0x503c,  // 值 //
  0x50a8,  // 储 //
  0x50cf,  // 像 //
  0x5141,  // 允 //
  0x5146,  // 兆 //
  0x5149,  // 光 //
  0x514b,  // 克 //
  0x5165,  // 入 //
  0x5168,  // 全 //
  0x516c,  // 公 //
  0x516d,  // 六 //
  0x5170,  // 兰 //
  0x5173,  // 关 //
  0x5177,  // 具 //
  0x5185,  // 内 //
  0x51c6,  // 准 //
  0x51fa,  // 出 //
  0x51fd,  // 函 //
  0x5206,  // 分 //
  0x5217,  // 列 //
  0x5220,  // 删 //
  0x5229,  // 利 //
  0x5236,  // 制 //
  0x529f,  // 功 //
  0x52a0,  // 加 //
  0x52a8,  // 动 //
  0x5300,  // 匀 //
  0x5305,  // 包 //
  0x5319,  // 匙 //
  0x5341,  // 十 //
  0x5343,  // 千 //
  0x5347,  // 升 //
  0x5355,  // 单 //
  0x5398,  // 厘 //
  0x53c9,  // 叉 //
  0x53ca,  // 及 //
  0x53d6,  // 取 //
  0x53d8,  // 变 //
  0x53ef,  // 可 //
  0x53f7,  // 号 //
  0x53f8,  // 司 //
  0x5408,  // 合 //
  0x540d,  // 名 //
  0x540e,  // 后 //
  0x5411,  // 向 //
  0x542b,  // 含 //
  0x544a,  // 告 //
  0x5468,  // 周 //
  0x547d,  // 命 //
  0x548c,  // 和 //
  0x54c1,  // 品 //
  0x5668,  // 器 //
  0x56de,  // 回 //
  0x56fd,  // 国 //
  0x56fe,  // 图 //
  0x5728,  // 在 //
  0x5747,  // 均 //
  0x5750,  // 坐 //
  0x5757,  // 块 //
  0x578b,  // 型 //
  0x57f9,  // 培 //
  0x5907,  // 备 //
  0x590d,  // 复 //
  0x5916,  // 外 //
  0x5927,  // 大 //
  0x5929,  // 天 //
  0x5934,  // 头 //
  0x5938,  // 夸 //
  0x5982,  // 如 //
  0x59cb,  // 始 //
  0x5b50,  // 子 //
  0x5b57,  // 字 //
  0x5b58,  // 存 //
  0x5b66,  // 学 //
  0x5b89,  // 安 //
  0x5b9a,  // 定 //
  0x5b9e,  // 实 //
  0x5bb6,  // 家 //
  0x5bb9,  // 容 //
  0x5bf8,  // 寸 //
  0x5bf9,  // 对 //
  0x5bfc,  // 导 //
  0x5c06,  // 将 //
  0x5c0f,  // 小 //
  0x5c3a,  // 尺 //
  0x5de5,  // 工 //
  0x5dee,  // 差 //
  0x5df2,  // 已 //
  0x5e03,  // 布 //
  0x5e42,  // 幂 //
  0x5e73,  // 平 //
  0x5e74,  // 年 //
  0x5e8f,  // 序 //
  0x5e94,  // 应 //
  0x5ea6,  // 度 //
  0x5f00,  // 开 //
  0x5f0f,  // 式 //
  0x5f27,  // 弧 //
  0x5f52,  // 归 //
  0x5f53,  // 当 //
  0x5faa,  // 循 //
  0x5fae,  // 微 //
  0x5fb7,  // 德 //
  0x5fc5,  // 必 //
  0x5ffd,  // 忽 //
  0x6001,  // 态 //
  0x6027,  // 性 //
  0x610f,  // 意 //
  0x6216,  // 或 //
  0x6240,  // 所 //
  0x6253,  // 打 //
  0x62e9,  // 择 //
  0x62ff,  // 拿 //
  0x6309,  // 按 //
  0x636e,  // 据 //
  0x6392,  // 排 //
  0x63a5,  // 接 //
  0x6539,  // 改 //
  0x653e,  // 放 //
  0x6570,  // 数 //
  0x6574,  // 整 //
  0x6587,  // 文 //
  0x65b9,  // 方 //
  0x65e5,  // 日 //
  0x65f6,  // 时 //
  0x662f,  // 是 //
  0x663e,  // 显 //
  0x66f2,  // 曲 //
  0x6700,  // 最 //
  0x6708,  // 月 //
  0x6709,  // 有 //
  0x672a,  // 未 //
  0x672c,  // 本 //
  0x676f,  // 杯 //
  0x6781,  // 极 //
  0x679c,  // 果 //
  0x6807,  // 标 //
  0x683c,  // 格 //
  0x6982,  // 概 //
  0x6a21,  // 模 //
  0x6b21,  // 次 //
  0x6b62,  // 止 //
  0x6b63,  // 正 //
  0x6b65,  // 步 //
  0x6beb,  // 毫 //
  0x6ca1,  // 没 //
  0x6cd5,  // 法 //
  0x6d3b,  // 活 //
  0x6d41,  // 流 //
  0x6d4b,  // 测 //
  0x6d4f,  // 浏 //
  0x6d88,  // 消 //
  0x6db2,  // 液 //
  0x6dfb,  // 添 //
  0x6e05,  // 清 //
  0x6ee1,  // 满 //
  0x6fc0,  // 激 //
  0x70b9,  // 点 //
  0x7126,  // 焦 //
  0x7136,  // 然 //
  0x7248,  // 版 //
  0x7259,  // 牙 //
  0x7279,  // 特 //
  0x7387,  // 率 //
  0x73af,  // 环 //
  0x73ed,  // 班 //
  0x74e6,  // 瓦 //
  0x7528,  // 用 //
  0x7535,  // 电 //
  0x7565,  // 略 //
  0x767e,  // 百 //
  0x7684,  // 的 //
  0x76ae,  // 皮 //
  0x76ce,  // 盎 //
  0x76f8,  // 相 //
  0x7801,  // 码 //
  0x786c,  // 硬 //
  0x786e,  // 确 //
  0x793a,  // 示 //
  0x7981,  // 禁 //
  0x79bb,  // 离 //
  0x79d1,  // 科 //
  0x79d2,  // 秒 //
  0x79ef,  // 积 //
  0x79fb,  // 移 //
  0x7a0b,  // 程 //
  0x7a7a,  // 空 //
  0x7b26,  // 符 //
  0x7b49,  // 等 //
  0x7b97,  // 算 //
  0x7bb1,  // 箱 //
  0x7c73,  // 米 //
  0x7c7b,  // 类 //
  0x7cfb,  // 系 //
  0x7eb3,  // 纳 //
  0x7ebf,  // 线 //
  0x7ec4,  // 组 //
  0x7ecf,  // 经 //
  0x7ed3,  // 结 //
  0x7ed8,  // 绘 //
  0x7edd,  // 绝 //
  0x7edf,  // 统 //
  0x7f29,  // 缩 //
  0x7f6e,  // 置 //
  0x7f8e,  // 美 //
  0x7ffb,  // 翻 //
  0x8003,  // 考 //
  0x8033,  // 耳 //
  0x80fd,  // 能 //
  0x811a,  // 脚 //
  0x8131,  // 脱 //
  0x81ea,  // 自 //
  0x822a,  // 航 //
  0x82f1,  // 英 //
  0x8336,  // 茶 //
  0x8377,  // 荷 //
  0x8404,  // 萄 //
  0x8461,  // 葡 //
  0x865a,  // 虚 //
  0x884c,  // 行 //
  0x8865,  // 补 //
  0x8868,  // 表 //
  0x88ab,  // 被 //
  0x897f,  // 西 //
  0x8981,  // 要 //
  0x89c8,  // 览 //
  0x89d2,  // 角 //
  0x89e3,  // 解 //
  0x8a00,  // 言 //
  0x8b66,  // 警 //
  0x8ba1,  // 计 //
  0x8ba4,  // 认 //
  0x8bb8,  // 许 //
  0x8bbe,  // 设 //
  0x8bd5,  // 试 //
  0x8be5,  // 该 //
  0x8bed,  // 语 //
  0x8bef,  // 误 //
  0x8bf7,  // 请 //
  0x8d28,  // 质 //
  0x8ddd,  // 距 //
  0x8e2a,  // 踪 //
  0x8f6c,  // 转 //
  0x8f6f,  // 软 //
  0x8f74,  // 轴 //
  0x8f91,  // 辑 //
  0x8f93,  // 输 //
  0x8fbe,  // 达 //
  0x8fc7,  // 过 //
  0x8fd0,  // 运 //
  0x8fd8,  // 还 //
  0x8fdb,  // 进 //
  0x8fde,  // 连 //
  0x8ffd,  // 追 //
  0x9000,  // 退 //
  0x9009,  // 选 //
  0x903b,  // 逻 //
  0x90e8,  // 部 //
  0x91cc,  // 里 //
  0x91cd,  // 重 //
  0x91cf,  // 量 //
  0x949f,  // 钟 //
  0x9519,  // 错 //
  0x957f,  // 长 //
  0x95ed,  // 闭 //
  0x95f4,  // 间 //
  0x9645,  // 际 //
  0x9664,  // 除 //
  0x9694,  // 隔 //
  0x9700,  // 需 //
  0x9879,  // 项 //
  0x987b,  // 须 //
  0x989d,  // 额 //
  0xFFFD,  // � // REPLACEMENT CHARACTER
  0x1d422, // 𝐢 // MATHEMATICAL BOLD SMALL I"
};

int NumberOfCodePoints = sizeof(CodePoints)/sizeof(CodePoints[0]);

#endif
