/*
Title: ゲームドキュメント
Subtitle: ゲームドキュメント・マニュアル
Author: テールリングリン
Description: ゲームのマニュアルを読んで、ゲームに慣れてください。
Placing: 5
*/

# ゲームデザインドキュメント

{{ mcb_toc }}

## オルタの旅



![オルタの旅](http://mahoutsukai.art/assets/images/travelsofoortalogobig.png)


寄稿者：



*   taellinglin（兩零林）
*   Geist
*   Yummyglitzer
*   Ninja_cat	




## 概要 


### 前書き 

旅は、カエルに変身した大帝国の失われた王子についてです。魔法の儀式がうまくいかなかったため、彼はカエルに変わり、暗殺者を振るうライバル国の影の魔法と友達にならなければなりません。それらは連携して、オルタの元の形式のフラグメントを復元します。カエル、ブル、犬、そして最終的には妖精の形に変身することで、あなたは領域のさまざまな隅を旅して、影の生き物や他の悪役を探し、あなたの形とエネルギーのバランスを世界に戻します。


### 設計者の声明

空想でAsria [ドリームキャスト]、スーパーマリオ3 [NES]、ゼルダ、ポケモン、及び洞窟物語：オルタの訪問は、Napple物語としてのタイトルに触発されています。これは、ハンドヘルドおよびその他の16ビットシステム用の1990年代から2000年代のJRPGと非常によく似たテーマです。これは、典型的なファンタジー/フィクションタイプのプロットと快適なプラットフォーム/パズル要素を備えた、この時代のゲームの雰囲気を取り戻すことを目的としています。これは、ドリームキャスト用の3Dプラットフォーマーであるナップルテールの2Dハンドヘルドバリアントによく似ていることを目的としています。それを際立たせる主な特徴は変換です。プレイヤーは、ゲーム内で6つの異なるフォームを効果的にプレイできます。各フォームには、ゲーム中に変更できる戦闘能力とパズル解決能力があります。音楽とアートワークも同じ時代のゲームに触発されるべきです。レベルのデザインには、ナップルテールの6つのエリアと同様に、四季と夕暮れと夜明けを反映したグラフィックが必要です。イースターエッグとクエストアイテムはレベルに隠され、特定の能力やアイテムを取得すると、プレイヤーは別のエリアに戻ることができます。




## ゲームについて


### ジャンル 


プラット/ RPG -があります、トップダウン、あなたは次または購買回復ポーション、マナ、または履行クエストをどうするかにヒントを得て、対話とのNPCに話しかけることができ、主に中央町エリア、いくつかの地域とヒントを取得します。ゲームの他の6つの領域に挑戦すると、レベルの側面図に切り替わり、ほとんどの洞窟物語やマリオなどのプラットフォーマーの仕組みがあります。レベルには、空、山、木、星など、タイル状のメインの背景があります。障害物や敵で満たされた直線的な左から右へのステージをスクロールする視差が実装されます。このステージでは、前景レベルが背景よりもわずかに大きくスクロールします。タイルセットは、ステージのシーズン、または夕暮れ/夜明けに音楽を伴ってテーマになります。効果音やファンファーレは、敵と戦ったりアイテムを集めたりするときに再生されます。プレイヤーは、これらの段階でジャンプ、攻撃、ブロック、および実行できるようになります。カエル、犬、雄牛、妖精、影の生き物、スパイの間で変身することもできます。 4つの変身は主な男性主人公であるオルタのためのものであり、夕暮れ/夜明けの変身はリライカの形であり、彼女は影またはスパイ/忍者になることができます。これらのさまざまなフォームを利用すると、チャージ攻撃、発射物、効果範囲スキルなど、さまざまな能力のセットが得られます。音楽はあなたがいる地域によって変わります。隠されたクエストアイテムを集めることで、クエストを完了したり、コレクションにアイテムを追加したりすることができます。これらのクエストを完了することで、隠されたアイテムを集めたり、町のキャラクターと話したり、いくつかのダイアログやその他の機能のロックを解除したりできます。


### ターゲットオーディエンス

このゲームは13+子供たちのために主にあります。古いRPGを好む視聴者を楽しませることを目的としていますが、王子がカエルに変身するなど、おとぎ話のようなテーマがあります...西洋文化の典型的なおとぎ話です。魔法とファンタジーの要素の多くは、プレイヤーが生/死と形/変容のテーマをより深く掘り下げることを可能にします。ニコラ・フラメルのハイログリフィック・キーなど、本質的に錬金術に基づいており、魔法の力学と要素の形や構造への変換が大きなテーマになります。季節の惑星のエネルギーと夕暮れと夜明けのサイクルは、主人公の形が世界の季節と太陽/月のサイクルとどのように絡み合っているかという重要な要素です。より成熟した認識で、年配の聴衆は歴史的な錬金術と魔法への言及を理解することができるはずです。この領域の魔法は不安定になりがちで、有毒な影の実体が土地全体に出現するため、不可能すぎることは起こりません。核変換、魔法、スペルキャスティングのプロセスは、時間、場所、芸術の実践者。このゲームの領域には、魔法のハンドブック、古い賢明なNPC、またはオルタが3つ（および妖精）の形式の1つに変換された理由のいくつかを説明するいくつかのアーティファクトなどの収集可能なアイテムがあります。ゲーム全体を通して、プレイヤーは2人の主人公がどのように集まって魔法について学ぶか、そしてそれぞれが冒険の両端に個別にアプローチする方法の両方を理解できる必要があります。リライカはより有益で、黒魔術に焦点を当てる傾向があり、獣と影の生き物がどのようになり、どのように振る舞うかについて、それらと戦うだけでなく、おそらくそれらが単なる悪ではないことを知る方法についてあなたに啓発します敵だけでなく、生態系での役割と彼らがどのようになってきたかについての裏話もあります。 オルタは、魔法がどのように機能するかについての頭脳ではなく、物理的な平面に焦点を当てていますが、フォームを復元するための次のステップを見つける方法に焦点を当てています。彼はより戦闘機であり、王子として生きることがどのようであるかについてのいくつかの物語も提供しているようです。彼は生き物や他の人々の行動の賢明な観察者として機能するだけでなく、他のNPCの行動に気づいたり、あることに気づいたりするなど、土地の非魔法的な側面について彼女の話をすることで、リライカに非常に友好的です近くの地域のある種の地質学的異常。 は忍者であり、ポーションマスターであり、生物学者でもありますが、オルタは社交家、生態学者、ジオマンサーです（土地や環境と精神的なつながりがあり、木や土を読んでいます）。メインプロット以外に、2人の主人公のストーリーと他の重要なキャラクターのバックストーリーを掘り下げることができます。


### アートディレクション

主役だけでなく、いくつかの環境芸術のために描かれたいくつかの設計の手がありました。任天堂64のZool：Mahou Tsukai Densetsu（Zool：Legendary Wizard）とNapple Tale：Asria in Daydream（Dreamcast）の明るく鮮やかな色と木/ペイントベースのデザインは、アートスタイルの主なインスピレーションですが、より多くのエイリアス/クリーンなシャドウとシェーディングを備えた鮮明なピクセルアートに適合します。 Trickerster +（等尺性 MMORPG）と洞窟物語（PC / WiiWare）も視覚的なスタイルが似ています。アニメーション、パレット、タイルセットは、ゲームボーイアドバンスの制約に技術的に適合しますが、洗練され、クリアで、活気に満ちているが、気を散らさないようにすることを目指しています。インタラクティブなアイテムを飽和させて焦点を合わせ、周囲の地形や背景とのコントラストを付けることは目には簡単ですが、特定のテーマや地域のテーマの感触（夏、春、冬、秋、夕暮れ、夜明け）にも適合します。アニメーションと動き/戦闘の仕組みには流動的なアニメーションが必要であり、GBAのハンドヘルドDパッド、ボタン、L / Rトリガーから非常にシームレスな感触を得ることができます。 


![Zool：Mahou Tsukai Densetsu](http://mahoutsukai.art/assets/images/zool-title.png)



タイトル画面

Zool：Mahou Tsukai Densetsu（Zool：Legendary Sorcerer）[N64]


![Zool：Mahou Tsukai Densetsu](http://mahoutsukai.art/assets/images/zool-dialog.png)

Dialog（日本語サポート）とキャラクターのポートレート

Zool：Mahou Tsukai Densetsu（Zool：Legendary Sorcerer）[N64]

![Napple Tale:Asria in Daydream](http://mahoutsukai.art/assets/images/napple-fanart.png)



## 魔法使いゲームナップルテールのファンアート。

## ナップルテール：デイドリームのアスリア（ナップルテールアリシアインデイ）ドリーム[ドリームキャスト]


![Trickster+](http://mahoutsukai.art/assets/images/trickster.png)

トリックスターと呼ばれる大量マルチプレイヤー2DRPGのかわいいキャラクター。

トリックスター+（PC）


## 洞窟物語
    

![Cave Story](http://mahoutsukai.art/assets/images/cave-story.png)


2Dプラットフォーマーの洞窟物語。


洞窟物語（PC）

<br><br>

## ゲーム要素
### ストーリー

物語は、まるで本を読んでいるかのように伝承とストーリーテリングを特徴とする、ダイアログとカットシーンを使用して語られます。吟遊詩人の物語がハリーポッターの本でどのように提示されているかと同様に、物語と世界の歴史/ファンタジーに深みを与えるキャラクターによって語られる伝承と伝説が付随します。魔法は複雑なものであり、土地の住民の歴史だけでなく、土地自体や、発見できる場合とできない場合がある他の魅惑的な遺物も同様です。メインストーリーは、あなたがなじみのない形のカエルに突き刺され、対立する国/一族への忠誠のためにライバルキャラクターになると予想される最初の仲間であるリライカを獲得することから始まりますが、彼女は自分のアラインメントを支持するか、共通の目的のために一緒に働く。結果として生じる旅には、さまざまなキャラクター、地域、またはアーティファクトに関する謎を解くセグメントが組み込まれています。一つの道が開かれ、あなたは情報を得られるだけでなく、冒険のより具体的な側面に神秘的な伝承を深めることができますが、それでもあなたの形を復元して王子として戻るという主な目標に向かって取り組んでいます。途中で、魔法をマスターしようとしているのはあなただけではないこともわかります。他の人も、あなたの国のリーダーとしての適切な役割を回復するのを妨げる可能性のある神聖な遺物、呪文、またはその他の力を獲得しようとしているからです。ストーリーを進めれば進めるほど、脅威はより深刻かつ即時になります。単にあなたの形を復元するための探求として始まり、より差し迫った差し迫った問題が発生し、ある時点ですべての紛争につながり、惑星の安定性と生/死自体が脅かされ、あなたは立ち上がる必要があります存在そのものを守るために挑戦。

<br><br>

## キャラクター
### オルタ
![Oorta](http://mahoutsukai.art/assets/images/oorta1.jpg)
<br><br>
![Oorta](http://mahoutsukai.art/assets/images/oorta2.png)
<br><br>


### リライカ
![Lilaika](http://mahoutsukai.art/assets/images/lilaika.png)

<br><br>

### 町民
は、いくつかの町の住民はあなたと話をする、店のオーナーとパワーアップや機器を購入するためのインと一緒に、あなたに話すことができるという町でのNPCの一握りがあります。特別なアイテムを与えたり、秘密や物語を教えたりする人もいます。彼らは上下に移動したり、1つの場所にとどまったり、前後に走ったりします。町には動物も数匹います。

<br><br>


### バンカー正
コインを集めて、特別な音楽などの報酬を獲得しましょう。あなたが町に戻るたびに、コインは自動的にあなたの銀行に入れられます。

<br><br>


### ストアクラークヤカユパワーエリクサーを
アップ、エンチャント、ペット、ポーション、購入します。一部のアイテムは一定期間ステータスの変更を許可し、コインで購入できます。

<br><br>


### 占い師由紀子
あなたが物語のどこにいるかに応じて、彼女はあなたを正しい方向に向け、重要なものを見つけるためのヒントを与えてくれます。彼女は時々天気を誤解することもあります。彼女は「秋の超能力者」です。

<br><br>


### 神社本殿文子
彼女は人生を熟考し、詩を書こうとします。レベルで彼女の詩を見つけて、彼女が書いたものを見てください。彼女は「春の乙女」

<br><br>


### 天文学者アルバトロスで
あり、危険な生き物や宇宙船があると主張して、星、惑星、その他の体についてのさまざまな噂をランダムに伝えます。彼は「冬のウォーロック」です。

<br><br>


### ドラゴンマスター 流星
彼は動物を飼いならす、モンスターや他の生き物をご紹介します。彼は「夏の召喚士」です。

<br><br>


### ヴラド提督
彼はさまざまな種類の植物とその働きについて説明します。彼は「夕暮れの騎士」

<br><br>


### スカイキャプテンアマイル
です。彼女は既知の地域の外に存在するさまざまな種類の場所について説明します。 彼女は「ドーンフライヤー」です。

<br><br>


### ミサキレインフラワーウィッチ
彼女はあなたにランダムなジョークやフレーズを教えてから質問をします。

<br><br>


## 無生物
### サンクローク
オルタがリンボで見つけた魔法のマントは、一般的な黒魔術から身を守り、魔法のように有毒な特定の環境で足を踏む特別な能力をオルタに与えます。 （保護アイテム）。

<br><br>



### シャドウフード
オルタのマントに似ていますが、ライトモンスターから身を守り、ダメージを与えることができるシャドウモンスターのみを許可します。

<br><br>


### シャイニング・ブレイド・オブ・ディアのディア

伝説の剣。射程は中程度で、コンボの3回目のストライクでは、以前の2倍の距離まで推力がかかり、密度の高い風の刃がすぐに現れてストライクを延長します。




### ドリーム

キャスターリライカが使用する、奇妙な物質の集中したボールを投げつけて敵を連れ戻す武器。 （巨大なノックバック）それはまた、静止している場合、充電され、敵からエネルギーを「ヒル」することができます。




### ツインホーン

ブル・オルタが身に着けている頭飾りで、敵を上向きに飛ばします。巨大な障害物を突破することができます。敵に大きなダメージを与えますが、非常に遅いです。

グラビティスタッフ重力

の力を運ぶスタッフ。それは敵を動かすことができなくすることができ、また入ってくる障害物の勢いを止めることができます。Dogオルタがこのスタッフを運んでいます。




## 消耗品

### ハーツ

オルタとリライカの両方のためのHP +は、3サイズがあります。




### パンコイン

領域内の標準通貨。




### パープルオーブ

リライカのEXP。これらを集めるほど、リライカはより強力になります。敵から入手して敵に命中させると、敵を落とすことができます。




### オレンジオーブ

オルタのEXP。集めるほど、オルタはより強力になります。敵から入手して敵に命中させると、敵を落とすことができます。




## クエストアイテム

### ティトゥス王の頭蓋骨

この長く死んだ王が実在の人物であると今でも信じている少数の旅行者が求めているクエストアイテム。これを見つけると、歴史的遺物を収集する町のNPCが、昔からの土地の特定の気密部族の歴史についての本を完成させるのを手伝うことができます。タイタス王は変容を発明した魔法の達人の一人であると言われていました。




### ハジヌのダイヤの指輪

不滅の力を与えると言われているこのアーティファクトは、防御力を高めるパワーブレスレットに交換して復元することができます。町の鍛冶屋はこのブレスレットを作ることができるでしょう。




### ラモナのソーン 

A 動植物のまれなタイプは、時間のためにプレーヤーの余分な攻撃力を付与するポーションにすることができることを発見しました。




### フェニックスの涙 

真っ赤な木からの樹液。死に近づくと、HPでプレイヤーをヒールします。




### パンメダリオン

すべてのレベルにあるこれらのメダリオンを収集すると、マンションの所有者は、マンションの隠し部屋とゲームの他の場所の隠し部屋の両方を開く秘密鍵と一緒に彼の邸宅を販売します。




## ゲームの構造 

### コントロール

*   D-左右に歩き、上を向いたり、下を向いたりするためのパッド。
*   ダウンは、いくつかのプラットフォームを通じてドロップする
*   ジャンプしてA
*   ダブルジャンプにA + Aを
*   攻撃-B
*   守るためにL-トリガ
*   特別攻撃- R + Bを
*   を選択-変更フォームメニュー
*   スタート-ポーズメニュー


### メカニック

ゲームは4近隣に町でオフを開始します地域。町をハブとして情報を収集し、4つの季節のそれぞれに移動し、地上と地下のレベルを移動して、スキルを習得し、アイテムと経験を獲得し、ストーリーを進め、パズルを解き、敵を倒します。メインストーリーと多くのサイドクエストを進めます。プラットフォームには、ジャンプ（A）、ダブルジャンプ（A + A）、攻撃（B）、魔法の使用（特殊攻撃のR + Bボタン、フォームの変更（選択）が含まれます）。障害物を克服し、敵を攻撃し、主に横スクロールレベル、次に町に戻って何が変わったかを確認してください！




### ヒットポイント/レスポーン 

ヘルスはHPによって測定され、すべてのレベルで、キャラクターのHP最大容量が増加します。より多くの敵を倒してレベルアップし、EXPを収集します。防御力だけでなく体力も向上します。一部の敵は、単発、発射、または毒などのダメージを与えます。他の敵の攻撃は、麻痺、睡眠、敏感なコントロール（混乱）、またはノックバックを引き起こします。HPが到達するとゼロの場合、ゲームオーバーになり、レベルの最後のチェックポイントからリスポーンするか、町に戻るかを選択できます。一部の敵は、他の敵よりもダメージが大きいか、攻撃方法が異なります。ピットに落ちると、HPが奪われ、リスポーンします。左または右のステージのバックに




## 
    レベル

ゲームがかかるている配置し コナとして知られ王国にます。この土地は古く、四季がありますが、時間に依存しない地域の気象システムです。さらに、空にある夜明けのレベルと、一見地下にある夕暮れのレベルがあります。各地域には、特定のテーマと一連のパズルを紹介する一連のステージがあります。 1つの地域のすべてに一度にアクセスできない場合があるため、地域間を移動する必要がある場合があります。難易度はどの地域でも増減する可能性があり、これらの地域に進んで後で戻るのは難しすぎる可能性があることを示しています。




### レベル 一番 – 秋の

カボチャ、かかし、トウモロコシの茎、ランタン、そして柔らかな赤/紫の空。このエリアはさびた秋の木々や小道がたくさんあります。威嚇するような敵はあなたを一時的に麻痺させる可能性があり、中にはあなたを追いかける人もいます。ボックスを所定の位置に押し込み、空きスペースにスライドさせて通り抜けます。多くの古典的なRPGの障害物とRPGは、最初のレベルに現れます。木枠や箱を押したり、穴や浮島を横切ったり、敵を斬ったり、ブロックしたり、迫り来る攻撃から飛び降りたりするなど、多くの人は精通している必要があります。




### レベル 二番 – 冬 

Icy Sloapsで[Down]を押すと、オルタが下にスライドし、画面上を飛んで、滑らかなランプやドロップオフから空気を抜くことができます。これらの敵は少し強く、木枠や箱は敵の上に押し込まれるとスライドし、小さな障害物を滑り抜け、壁にぶつかったり画面から落ちたりしたときにのみ停止します。すぐにレベルに到達した後、ここでオルタ'sDogフォームを利用します。犬として、彼はさらに跳躍し、[下]でオブジェクトを拾い上げ、他のものの上にドロップすることができます。一部のレベルには可動部品とプラットフォームがあります。。 




### レベル 三番 – 春雨

が降っていて、流れる水の小さな川があなたを運び去り、風が吹いています。このレベルの多くのインスピレーションは、ゲームヨッシーストーリーから得られるかもしれません。爆発する卵、鳥、そして他の無数の奇妙な生き物があなたに直面します。あなたはまた、雄牛の形を手に入れます。ブルを使用して、木製のバリケードを突破し、高い場所からアイテムをノックオフします。




### レベル　四番 –　夏の太陽光線

、浜辺の人、その他の水生および航海のテーマがこの地域の地図に含まれています。ウニ、ウナギ、カニ、アカザエビなどの海をテーマにしたモンスターがあなたを攻撃しようとします。また、それらの多くは発射物を撃ちますので、気をつけてください！




### エンディング

ザ・エンディングは表示されます オルタヴァンキッシュリライカと巨大な影のモンスターが。シャドウモンスターは、大量のパンコインと経験値を吐き出します。部屋が明るくなり、石像が話し始め、オルタとリライカの王冠を授け、それらを英雄の力と名付けます。すべてのアイテムを集めてゲームを完了すると、2倍の攻撃力と2倍の防御力が得られます。また、別のタイトル画面のロックを解除します。
