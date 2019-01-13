// Generated from f:\database\antlr\antlr4\runtime\Cpp\demo\Windows\antlr4-cpp-demo\NaiveSqlParser.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class NaiveSqlParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		SPACE=1, SPEC_MYSQL_COMMENT=2, COMMENT_INPUT=3, LINE_COMMENT=4, ADD=5, 
		ALL=6, ALTER=7, ANALYZE=8, AND=9, AS=10, ASC=11, BEFORE=12, BETWEEN=13, 
		BOTH=14, BY=15, CALL=16, CASCADE=17, CASE=18, CAST=19, CHANGE=20, CHARACTER=21, 
		CHECK=22, COLLATE=23, COLUMN=24, CONDITION=25, CONSTRAINT=26, CONTINUE=27, 
		CONVERT=28, CREATE=29, CROSS=30, CURRENT_USER=31, CURSOR=32, DATABASE=33, 
		DATABASES=34, DECLARE=35, DEFAULT=36, DELAYED=37, DELETE=38, DESC=39, 
		DESCRIBE=40, DETERMINISTIC=41, DISTINCT=42, DISTINCTROW=43, DROP=44, EACH=45, 
		ELSE=46, ELSEIF=47, ENCLOSED=48, ESCAPED=49, EXISTS=50, EXIT=51, EXPLAIN=52, 
		FALSE=53, FETCH=54, FOR=55, FORCE=56, FOREIGN=57, FROM=58, FULLTEXT=59, 
		GRANT=60, GROUP=61, HAVING=62, HIGH_PRIORITY=63, IF=64, IGNORE=65, IN=66, 
		INDEX=67, INFILE=68, INNER=69, INOUT=70, INSERT=71, INTERVAL=72, INTO=73, 
		IS=74, ITERATE=75, JOIN=76, KEY=77, KEYS=78, KILL=79, LEADING=80, LEAVE=81, 
		LEFT=82, LIKE=83, LIMIT=84, LINEAR=85, LINES=86, LOAD=87, LOCK=88, LOOP=89, 
		LOW_PRIORITY=90, MASTER_BIND=91, MASTER_SSL_VERIFY_SERVER_CERT=92, MATCH=93, 
		MAXVALUE=94, MODIFIES=95, NATURAL=96, NOT=97, NO_WRITE_TO_BINLOG=98, NULL_LITERAL=99, 
		ON=100, OPTIMIZE=101, OPTION=102, OPTIONALLY=103, OR=104, ORDER=105, OUT=106, 
		OUTER=107, OUTFILE=108, PARTITION=109, PRIMARY=110, PROCEDURE=111, PURGE=112, 
		RANGE=113, READ=114, READS=115, REFERENCES=116, REGEXP=117, RELEASE=118, 
		RENAME=119, REPEAT=120, REPLACE=121, REQUIRE=122, RESTRICT=123, RETURN=124, 
		REVOKE=125, RIGHT=126, RLIKE=127, SCHEMA=128, SCHEMAS=129, SELECT=130, 
		SET=131, SEPARATOR=132, SHOW=133, SPATIAL=134, SQL=135, SQLEXCEPTION=136, 
		SQLSTATE=137, SQLWARNING=138, SQL_BIG_RESULT=139, SQL_CALC_FOUND_ROWS=140, 
		SQL_SMALL_RESULT=141, SSL=142, STARTING=143, STRAIGHT_JOIN=144, TABLE=145, 
		TERMINATED=146, THEN=147, TO=148, TRAILING=149, TRIGGER=150, TRUE=151, 
		UNDO=152, UNION=153, UNIQUE=154, UNLOCK=155, UNSIGNED=156, UPDATE=157, 
		USAGE=158, USE=159, USING=160, VALUES=161, WHEN=162, WHERE=163, WHILE=164, 
		WITH=165, WRITE=166, XOR=167, ZEROFILL=168, AUTO_INCREMENT=169, ACCOUNT=170, 
		ACTION=171, AFTER=172, AGGREGATE=173, ALGORITHM=174, ANY=175, AT=176, 
		AUTHORS=177, AUTOCOMMIT=178, AUTOEXTEND_SIZE=179, AVG_ROW_LENGTH=180, 
		BEGIN=181, BINLOG=182, BIT=183, BLOCK=184, BOOL=185, BOOLEAN=186, BTREE=187, 
		CACHE=188, CASCADED=189, CHAIN=190, CHANGED=191, CHANNEL=192, CHECKSUM=193, 
		CIPHER=194, CLIENT=195, CLOSE=196, COALESCE=197, CODE=198, COLUMNS=199, 
		COLUMN_FORMAT=200, COMMENT=201, COMMIT=202, COMPACT=203, COMPLETION=204, 
		COMPRESSED=205, COMPRESSION=206, CONCURRENT=207, CONNECTION=208, CONSISTENT=209, 
		CONTAINS=210, CONTEXT=211, CONTRIBUTORS=212, COPY=213, CPU=214, DATA=215, 
		DATAFILE=216, DEALLOCATE=217, DEFAULT_AUTH=218, DEFINER=219, DELAY_KEY_WRITE=220, 
		DES_KEY_FILE=221, DIRECTORY=222, DISABLE=223, DISCARD=224, DISK=225, DO=226, 
		DUMPFILE=227, DUPLICATE=228, DYNAMIC=229, ENABLE=230, ENCRYPTION=231, 
		END=232, ENDS=233, ENGINE=234, ENGINES=235, ERROR=236, ERRORS=237, ESCAPE=238, 
		EVEN=239, EVENT=240, EVENTS=241, EVERY=242, EXCHANGE=243, EXCLUSIVE=244, 
		EXPIRE=245, EXPORT=246, EXTENDED=247, EXTENT_SIZE=248, FAST=249, FAULTS=250, 
		FIELDS=251, FILE_BLOCK_SIZE=252, FILTER=253, FIRST=254, FIXED=255, FLUSH=256, 
		FOLLOWS=257, FOUND=258, FULL=259, FUNCTION=260, GENERAL=261, GLOBAL=262, 
		GRANTS=263, GROUP_REPLICATION=264, HANDLER=265, HASH=266, HELP=267, HOST=268, 
		HOSTS=269, IDENTIFIED=270, IGNORE_SERVER_IDS=271, IMPORT=272, INDEXES=273, 
		INITIAL_SIZE=274, INPLACE=275, INSERT_METHOD=276, INSTALL=277, INSTANCE=278, 
		INVOKER=279, IO=280, IO_THREAD=281, IPC=282, ISOLATION=283, ISSUER=284, 
		JSON=285, KEY_BLOCK_SIZE=286, LANGUAGE=287, LAST=288, LEAVES=289, LESS=290, 
		LEVEL=291, LIST=292, LOCAL=293, LOGFILE=294, LOGS=295, MASTER=296, MASTER_AUTO_POSITION=297, 
		MASTER_CONNECT_RETRY=298, MASTER_DELAY=299, MASTER_HEARTBEAT_PERIOD=300, 
		MASTER_HOST=301, MASTER_LOG_FILE=302, MASTER_LOG_POS=303, MASTER_PASSWORD=304, 
		MASTER_PORT=305, MASTER_RETRY_COUNT=306, MASTER_SSL=307, MASTER_SSL_CA=308, 
		MASTER_SSL_CAPATH=309, MASTER_SSL_CERT=310, MASTER_SSL_CIPHER=311, MASTER_SSL_CRL=312, 
		MASTER_SSL_CRLPATH=313, MASTER_SSL_KEY=314, MASTER_TLS_VERSION=315, MASTER_USER=316, 
		MAX_CONNECTIONS_PER_HOUR=317, MAX_QUERIES_PER_HOUR=318, MAX_ROWS=319, 
		MAX_SIZE=320, MAX_UPDATES_PER_HOUR=321, MAX_USER_CONNECTIONS=322, MEDIUM=323, 
		MERGE=324, MID=325, MIGRATE=326, MIN_ROWS=327, MODE=328, MODIFY=329, MUTEX=330, 
		MYSQL=331, NAME=332, NAMES=333, NCHAR=334, NEVER=335, NEXT=336, NO=337, 
		NODEGROUP=338, NONE=339, OFFLINE=340, OFFSET=341, OJ=342, OLD_PASSWORD=343, 
		ONE=344, ONLINE=345, ONLY=346, OPEN=347, OPTIMIZER_COSTS=348, OPTIONS=349, 
		OWNER=350, PACK_KEYS=351, PAGE=352, PARSER=353, PARTIAL=354, PARTITIONING=355, 
		PARTITIONS=356, PASSWORD=357, PHASE=358, PLUGIN=359, PLUGIN_DIR=360, PLUGINS=361, 
		PORT=362, PRECEDES=363, PREPARE=364, PRESERVE=365, PREV=366, PROCESSLIST=367, 
		PROFILE=368, PROFILES=369, PROXY=370, QUERY=371, QUICK=372, REBUILD=373, 
		RECOVER=374, REDO_BUFFER_SIZE=375, REDUNDANT=376, RELAY=377, RELAY_LOG_FILE=378, 
		RELAY_LOG_POS=379, RELAYLOG=380, REMOVE=381, REORGANIZE=382, REPAIR=383, 
		REPLICATE_DO_DB=384, REPLICATE_DO_TABLE=385, REPLICATE_IGNORE_DB=386, 
		REPLICATE_IGNORE_TABLE=387, REPLICATE_REWRITE_DB=388, REPLICATE_WILD_DO_TABLE=389, 
		REPLICATE_WILD_IGNORE_TABLE=390, REPLICATION=391, RESET=392, RESUME=393, 
		RETURNS=394, ROLLBACK=395, ROLLUP=396, ROTATE=397, ROW=398, ROWS=399, 
		ROW_FORMAT=400, SAVEPOINT=401, SCHEDULE=402, SECURITY=403, SERVER=404, 
		SESSION=405, SHARE=406, SHARED=407, SIGNED=408, SIMPLE=409, SLAVE=410, 
		SLOW=411, SNAPSHOT=412, SOCKET=413, SOME=414, SONAME=415, SOUNDS=416, 
		SOURCE=417, SQL_AFTER_GTIDS=418, SQL_AFTER_MTS_GAPS=419, SQL_BEFORE_GTIDS=420, 
		SQL_BUFFER_RESULT=421, SQL_CACHE=422, SQL_NO_CACHE=423, SQL_THREAD=424, 
		START=425, STARTS=426, STATS_AUTO_RECALC=427, STATS_PERSISTENT=428, STATS_SAMPLE_PAGES=429, 
		STATUS=430, STOP=431, STORAGE=432, STRING=433, SUBJECT=434, SUBPARTITION=435, 
		SUBPARTITIONS=436, SUSPEND=437, SWAPS=438, SWITCHES=439, TABLESPACE=440, 
		TEMPORARY=441, TEMPTABLE=442, THAN=443, TRADITIONAL=444, TRANSACTION=445, 
		TRIGGERS=446, TRUNCATE=447, UNDEFINED=448, UNDOFILE=449, UNDO_BUFFER_SIZE=450, 
		UNINSTALL=451, UNKNOWN=452, UNTIL=453, UPGRADE=454, USER=455, USE_FRM=456, 
		USER_RESOURCES=457, VALIDATION=458, VALUE=459, VARIABLES=460, VIEW=461, 
		WAIT=462, WARNINGS=463, WITHOUT=464, WORK=465, WRAPPER=466, X509=467, 
		XA=468, XML=469, TINYINT=470, SMALLINT=471, MEDIUMINT=472, INT=473, INTEGER=474, 
		BIGINT=475, REAL=476, DOUBLE=477, FLOAT=478, DECIMAL=479, NUMERIC=480, 
		DATE=481, TIME=482, TIMESTAMP=483, DATETIME=484, YEAR=485, CHAR=486, VARCHAR=487, 
		BINARY=488, VARBINARY=489, TINYBLOB=490, BLOB=491, MEDIUMBLOB=492, LONGBLOB=493, 
		TINYTEXT=494, TEXT=495, MEDIUMTEXT=496, LONGTEXT=497, ENUM=498, YEAR_MONTH=499, 
		DAY_HOUR=500, DAY_MINUTE=501, DAY_SECOND=502, HOUR_MINUTE=503, HOUR_SECOND=504, 
		MINUTE_SECOND=505, SECOND_MICROSECOND=506, MINUTE_MICROSECOND=507, HOUR_MICROSECOND=508, 
		DAY_MICROSECOND=509, AVG=510, BIT_AND=511, BIT_OR=512, BIT_XOR=513, COUNT=514, 
		GROUP_CONCAT=515, MAX=516, MIN=517, STD=518, STDDEV=519, STDDEV_POP=520, 
		STDDEV_SAMP=521, SUM=522, VAR_POP=523, VAR_SAMP=524, VARIANCE=525, CURRENT_DATE=526, 
		CURRENT_TIME=527, CURRENT_TIMESTAMP=528, LOCALTIME=529, CURDATE=530, CURTIME=531, 
		DATE_ADD=532, DATE_SUB=533, EXTRACT=534, LOCALTIMESTAMP=535, NOW=536, 
		POSITION=537, SUBSTR=538, SUBSTRING=539, SYSDATE=540, TRIM=541, UTC_DATE=542, 
		UTC_TIME=543, UTC_TIMESTAMP=544, QUARTER=545, MONTH=546, DAY=547, HOUR=548, 
		MINUTE=549, WEEK=550, SECOND=551, MICROSECOND=552, VAR_ASSIGN=553, PLUS_ASSIGN=554, 
		MINUS_ASSIGN=555, MULT_ASSIGN=556, DIV_ASSIGN=557, MOD_ASSIGN=558, AND_ASSIGN=559, 
		XOR_ASSIGN=560, OR_ASSIGN=561, STAR=562, DIVIDE=563, MODULE=564, PLUS=565, 
		MINUSMINUS=566, MINUS=567, DIV=568, MOD=569, EQUAL_SYMBOL=570, GREATER_SYMBOL=571, 
		LESS_SYMBOL=572, EXCLAMATION_SYMBOL=573, BIT_NOT_OP=574, BIT_OR_OP=575, 
		BIT_AND_OP=576, BIT_XOR_OP=577, DOT=578, LR_BRACKET=579, RR_BRACKET=580, 
		COMMA=581, SEMI=582, AT_SIGN=583, ZERO_DECIMAL=584, ONE_DECIMAL=585, TWO_DECIMAL=586, 
		SINGLE_QUOTE_SYMB=587, DOUBLE_QUOTE_SYMB=588, REVERSE_QUOTE_SYMB=589, 
		COLON_SYMB=590, START_NATIONAL_STRING_LITERAL=591, STRING_LITERAL=592, 
		DECIMAL_LITERAL=593, HEXADECIMAL_LITERAL=594, REAL_LITERAL=595, NULL_SPEC_LITERAL=596, 
		BIT_STRING=597, ID=598, LOCAL_ID=599, ERROR_RECONGNIGION=600;
	public static final int
		RULE_root = 0, RULE_sqlStatements = 1, RULE_sqlStatement = 2, RULE_emptyStatement = 3, 
		RULE_ddlStatement = 4, RULE_createTable = 5, RULE_createDefinitions = 6, 
		RULE_createDefinition = 7, RULE_columnDefinition = 8, RULE_columnConstraint = 9, 
		RULE_dropTable = 10, RULE_dmlStatement = 11, RULE_selectStatement = 12, 
		RULE_queryExpression = 13, RULE_queryExpressionNointo = 14, RULE_querySpecification = 15, 
		RULE_querySpecificationNointo = 16, RULE_unionParenthesis = 17, RULE_unionStatement = 18, 
		RULE_selectSpec = 19, RULE_selectElements = 20, RULE_selectElement = 21, 
		RULE_selectIntoExpression = 22, RULE_deleteStatement = 23, RULE_singleDeleteStatement = 24, 
		RULE_insertStatement = 25, RULE_insertStatementValue = 26, RULE_assignmentField = 27, 
		RULE_updatedElement = 28, RULE_fromClause = 29, RULE_groupByItem = 30, 
		RULE_limitClause = 31, RULE_orderByClause = 32, RULE_orderByExpression = 33, 
		RULE_tableSources = 34, RULE_tableSource = 35, RULE_tableSourceItem = 36, 
		RULE_indexHint = 37, RULE_indexHintType = 38, RULE_joinPart = 39, RULE_expression = 40, 
		RULE_predicate = 41, RULE_expressionAtom = 42, RULE_unaryOperator = 43, 
		RULE_comparisonOperator = 44, RULE_logicalOperator = 45, RULE_bitOperator = 46, 
		RULE_mathOperator = 47, RULE_collationName = 48, RULE_decimalLiteral = 49, 
		RULE_stringLiteral = 50, RULE_booleanLiteral = 51, RULE_hexadecimalLiteral = 52, 
		RULE_nullNotnull = 53, RULE_constant = 54, RULE_uid = 55, RULE_fullId = 56, 
		RULE_tableName = 57, RULE_indexColumnName = 58, RULE_uidList = 59, RULE_tables = 60, 
		RULE_indexColumnNames = 61, RULE_expressions = 62, RULE_expressionsWithDefaults = 63, 
		RULE_constants = 64, RULE_simpleStrings = 65, RULE_userVariables = 66, 
		RULE_dataType = 67, RULE_intervalType = 68, RULE_intervalTypeBase = 69, 
		RULE_convertedDataType = 70, RULE_lengthOneDimension = 71, RULE_lengthTwoDimension = 72, 
		RULE_lengthTwoOptionalDimension = 73, RULE_defaultValue = 74, RULE_currentTimestamp = 75, 
		RULE_expressionOrDefault = 76, RULE_ifExists = 77, RULE_ifNotExists = 78;
	public static final String[] ruleNames = {
		"root", "sqlStatements", "sqlStatement", "emptyStatement", "ddlStatement", 
		"createTable", "createDefinitions", "createDefinition", "columnDefinition", 
		"columnConstraint", "dropTable", "dmlStatement", "selectStatement", "queryExpression", 
		"queryExpressionNointo", "querySpecification", "querySpecificationNointo", 
		"unionParenthesis", "unionStatement", "selectSpec", "selectElements", 
		"selectElement", "selectIntoExpression", "deleteStatement", "singleDeleteStatement", 
		"insertStatement", "insertStatementValue", "assignmentField", "updatedElement", 
		"fromClause", "groupByItem", "limitClause", "orderByClause", "orderByExpression", 
		"tableSources", "tableSource", "tableSourceItem", "indexHint", "indexHintType", 
		"joinPart", "expression", "predicate", "expressionAtom", "unaryOperator", 
		"comparisonOperator", "logicalOperator", "bitOperator", "mathOperator", 
		"collationName", "decimalLiteral", "stringLiteral", "booleanLiteral", 
		"hexadecimalLiteral", "nullNotnull", "constant", "uid", "fullId", "tableName", 
		"indexColumnName", "uidList", "tables", "indexColumnNames", "expressions", 
		"expressionsWithDefaults", "constants", "simpleStrings", "userVariables", 
		"dataType", "intervalType", "intervalTypeBase", "convertedDataType", "lengthOneDimension", 
		"lengthTwoDimension", "lengthTwoOptionalDimension", "defaultValue", "currentTimestamp", 
		"expressionOrDefault", "ifExists", "ifNotExists"
	};

	private static final String[] _LITERAL_NAMES = {
		null, null, null, null, null, "'ADD'", "'ALL'", "'ALTER'", "'ANALYZE'", 
		"'AND'", "'AS'", "'ASC'", "'BEFORE'", "'BETWEEN'", "'BOTH'", "'BY'", "'CALL'", 
		"'CASCADE'", "'CASE'", "'CAST'", "'CHANGE'", "'CHARACTER'", "'CHECK'", 
		"'COLLATE'", "'COLUMN'", "'CONDITION'", "'CONSTRAINT'", "'CONTINUE'", 
		"'CONVERT'", "'CREATE'", "'CROSS'", "'CURRENT_USER'", "'CURSOR'", "'DATABASE'", 
		"'DATABASES'", "'DECLARE'", "'DEFAULT'", "'DELAYED'", "'DELETE'", "'DESC'", 
		"'DESCRIBE'", "'DETERMINISTIC'", "'DISTINCT'", "'DISTINCTROW'", "'DROP'", 
		"'EACH'", "'ELSE'", "'ELSEIF'", "'ENCLOSED'", "'ESCAPED'", "'EXISTS'", 
		"'EXIT'", "'EXPLAIN'", "'FALSE'", "'FETCH'", "'FOR'", "'FORCE'", "'FOREIGN'", 
		"'FROM'", "'FULLTEXT'", "'GRANT'", "'GROUP'", "'HAVING'", "'HIGH_PRIORITY'", 
		"'IF'", "'IGNORE'", "'IN'", "'INDEX'", "'INFILE'", "'INNER'", "'INOUT'", 
		"'INSERT'", "'INTERVAL'", "'INTO'", "'IS'", "'ITERATE'", "'JOIN'", "'KEY'", 
		"'KEYS'", "'KILL'", "'LEADING'", "'LEAVE'", "'LEFT'", "'LIKE'", "'LIMIT'", 
		"'LINEAR'", "'LINES'", "'LOAD'", "'LOCK'", "'LOOP'", "'LOW_PRIORITY'", 
		"'MASTER_BIND'", "'MASTER_SSL_VERIFY_SERVER_CERT'", "'MATCH'", "'MAXVALUE'", 
		"'MODIFIES'", "'NATURAL'", "'NOT'", "'NO_WRITE_TO_BINLOG'", "'NULL'", 
		"'ON'", "'OPTIMIZE'", "'OPTION'", "'OPTIONALLY'", "'OR'", "'ORDER'", "'OUT'", 
		"'OUTER'", "'OUTFILE'", "'PARTITION'", "'PRIMARY'", "'PROCEDURE'", "'PURGE'", 
		"'RANGE'", "'READ'", "'READS'", "'REFERENCES'", "'REGEXP'", "'RELEASE'", 
		"'RENAME'", "'REPEAT'", "'REPLACE'", "'REQUIRE'", "'RESTRICT'", "'RETURN'", 
		"'REVOKE'", "'RIGHT'", "'RLIKE'", "'SCHEMA'", "'SCHEMAS'", "'SELECT'", 
		"'SET'", "'SEPARATOR'", "'SHOW'", "'SPATIAL'", "'SQL'", "'SQLEXCEPTION'", 
		"'SQLSTATE'", "'SQLWARNING'", "'SQL_BIG_RESULT'", "'SQL_CALC_FOUND_ROWS'", 
		"'SQL_SMALL_RESULT'", "'SSL'", "'STARTING'", "'STRAIGHT_JOIN'", "'TABLE'", 
		"'TERMINATED'", "'THEN'", "'TO'", "'TRAILING'", "'TRIGGER'", "'TRUE'", 
		"'UNDO'", "'UNION'", "'UNIQUE'", "'UNLOCK'", "'UNSIGNED'", "'UPDATE'", 
		"'USAGE'", "'USE'", "'USING'", "'VALUES'", "'WHEN'", "'WHERE'", "'WHILE'", 
		"'WITH'", "'WRITE'", "'XOR'", "'ZEROFILL'", "'AUTO_INCREMENT'", "'ACCOUNT'", 
		"'ACTION'", "'AFTER'", "'AGGREGATE'", "'ALGORITHM'", "'ANY'", "'AT'", 
		"'AUTHORS'", "'AUTOCOMMIT'", "'AUTOEXTEND_SIZE'", "'AVG_ROW_LENGTH'", 
		"'BEGIN'", "'BINLOG'", "'BIT'", "'BLOCK'", "'BOOL'", "'BOOLEAN'", "'BTREE'", 
		"'CACHE'", "'CASCADED'", "'CHAIN'", "'CHANGED'", "'CHANNEL'", "'CHECKSUM'", 
		"'CIPHER'", "'CLIENT'", "'CLOSE'", "'COALESCE'", "'CODE'", "'COLUMNS'", 
		"'COLUMN_FORMAT'", "'COMMENT'", "'COMMIT'", "'COMPACT'", "'COMPLETION'", 
		"'COMPRESSED'", "'COMPRESSION'", "'CONCURRENT'", "'CONNECTION'", "'CONSISTENT'", 
		"'CONTAINS'", "'CONTEXT'", "'CONTRIBUTORS'", "'COPY'", "'CPU'", "'DATA'", 
		"'DATAFILE'", "'DEALLOCATE'", "'DEFAULT_AUTH'", "'DEFINER'", "'DELAY_KEY_WRITE'", 
		"'DES_KEY_FILE'", "'DIRECTORY'", "'DISABLE'", "'DISCARD'", "'DISK'", "'DO'", 
		"'DUMPFILE'", "'DUPLICATE'", "'DYNAMIC'", "'ENABLE'", "'ENCRYPTION'", 
		"'END'", "'ENDS'", "'ENGINE'", "'ENGINES'", "'ERROR'", "'ERRORS'", "'ESCAPE'", 
		"'EVEN'", "'EVENT'", "'EVENTS'", "'EVERY'", "'EXCHANGE'", "'EXCLUSIVE'", 
		"'EXPIRE'", "'EXPORT'", "'EXTENDED'", "'EXTENT_SIZE'", "'FAST'", "'FAULTS'", 
		"'FIELDS'", "'FILE_BLOCK_SIZE'", "'FILTER'", "'FIRST'", "'FIXED'", "'FLUSH'", 
		"'FOLLOWS'", "'FOUND'", "'FULL'", "'FUNCTION'", "'GENERAL'", "'GLOBAL'", 
		"'GRANTS'", "'GROUP_REPLICATION'", "'HANDLER'", "'HASH'", "'HELP'", "'HOST'", 
		"'HOSTS'", "'IDENTIFIED'", "'IGNORE_SERVER_IDS'", "'IMPORT'", "'INDEXES'", 
		"'INITIAL_SIZE'", "'INPLACE'", "'INSERT_METHOD'", "'INSTALL'", "'INSTANCE'", 
		"'INVOKER'", "'IO'", "'IO_THREAD'", "'IPC'", "'ISOLATION'", "'ISSUER'", 
		"'JSON'", "'KEY_BLOCK_SIZE'", "'LANGUAGE'", "'LAST'", "'LEAVES'", "'LESS'", 
		"'LEVEL'", "'LIST'", "'LOCAL'", "'LOGFILE'", "'LOGS'", "'MASTER'", "'MASTER_AUTO_POSITION'", 
		"'MASTER_CONNECT_RETRY'", "'MASTER_DELAY'", "'MASTER_HEARTBEAT_PERIOD'", 
		"'MASTER_HOST'", "'MASTER_LOG_FILE'", "'MASTER_LOG_POS'", "'MASTER_PASSWORD'", 
		"'MASTER_PORT'", "'MASTER_RETRY_COUNT'", "'MASTER_SSL'", "'MASTER_SSL_CA'", 
		"'MASTER_SSL_CAPATH'", "'MASTER_SSL_CERT'", "'MASTER_SSL_CIPHER'", "'MASTER_SSL_CRL'", 
		"'MASTER_SSL_CRLPATH'", "'MASTER_SSL_KEY'", "'MASTER_TLS_VERSION'", "'MASTER_USER'", 
		"'MAX_CONNECTIONS_PER_HOUR'", "'MAX_QUERIES_PER_HOUR'", "'MAX_ROWS'", 
		"'MAX_SIZE'", "'MAX_UPDATES_PER_HOUR'", "'MAX_USER_CONNECTIONS'", "'MEDIUM'", 
		"'MERGE'", "'MID'", "'MIGRATE'", "'MIN_ROWS'", "'MODE'", "'MODIFY'", "'MUTEX'", 
		"'MYSQL'", "'NAME'", "'NAMES'", "'NCHAR'", "'NEVER'", "'NEXT'", "'NO'", 
		"'NODEGROUP'", "'NONE'", "'OFFLINE'", "'OFFSET'", "'OJ'", "'OLD_PASSWORD'", 
		"'ONE'", "'ONLINE'", "'ONLY'", "'OPEN'", "'OPTIMIZER_COSTS'", "'OPTIONS'", 
		"'OWNER'", "'PACK_KEYS'", "'PAGE'", "'PARSER'", "'PARTIAL'", "'PARTITIONING'", 
		"'PARTITIONS'", "'PASSWORD'", "'PHASE'", "'PLUGIN'", "'PLUGIN_DIR'", "'PLUGINS'", 
		"'PORT'", "'PRECEDES'", "'PREPARE'", "'PRESERVE'", "'PREV'", "'PROCESSLIST'", 
		"'PROFILE'", "'PROFILES'", "'PROXY'", "'QUERY'", "'QUICK'", "'REBUILD'", 
		"'RECOVER'", "'REDO_BUFFER_SIZE'", "'REDUNDANT'", "'RELAY'", "'RELAY_LOG_FILE'", 
		"'RELAY_LOG_POS'", "'RELAYLOG'", "'REMOVE'", "'REORGANIZE'", "'REPAIR'", 
		"'REPLICATE_DO_DB'", "'REPLICATE_DO_TABLE'", "'REPLICATE_IGNORE_DB'", 
		"'REPLICATE_IGNORE_TABLE'", "'REPLICATE_REWRITE_DB'", "'REPLICATE_WILD_DO_TABLE'", 
		"'REPLICATE_WILD_IGNORE_TABLE'", "'REPLICATION'", "'RESET'", "'RESUME'", 
		"'RETURNS'", "'ROLLBACK'", "'ROLLUP'", "'ROTATE'", "'ROW'", "'ROWS'", 
		"'ROW_FORMAT'", "'SAVEPOINT'", "'SCHEDULE'", "'SECURITY'", "'SERVER'", 
		"'SESSION'", "'SHARE'", "'SHARED'", "'SIGNED'", "'SIMPLE'", "'SLAVE'", 
		"'SLOW'", "'SNAPSHOT'", "'SOCKET'", "'SOME'", "'SONAME'", "'SOUNDS'", 
		"'SOURCE'", "'SQL_AFTER_GTIDS'", "'SQL_AFTER_MTS_GAPS'", "'SQL_BEFORE_GTIDS'", 
		"'SQL_BUFFER_RESULT'", "'SQL_CACHE'", "'SQL_NO_CACHE'", "'SQL_THREAD'", 
		"'START'", "'STARTS'", "'STATS_AUTO_RECALC'", "'STATS_PERSISTENT'", "'STATS_SAMPLE_PAGES'", 
		"'STATUS'", "'STOP'", "'STORAGE'", "'STRING'", "'SUBJECT'", "'SUBPARTITION'", 
		"'SUBPARTITIONS'", "'SUSPEND'", "'SWAPS'", "'SWITCHES'", "'TABLESPACE'", 
		"'TEMPORARY'", "'TEMPTABLE'", "'THAN'", "'TRADITIONAL'", "'TRANSACTION'", 
		"'TRIGGERS'", "'TRUNCATE'", "'UNDEFINED'", "'UNDOFILE'", "'UNDO_BUFFER_SIZE'", 
		"'UNINSTALL'", "'UNKNOWN'", "'UNTIL'", "'UPGRADE'", "'USER'", "'USE_FRM'", 
		"'USER_RESOURCES'", "'VALIDATION'", "'VALUE'", "'VARIABLES'", "'VIEW'", 
		"'WAIT'", "'WARNINGS'", "'WITHOUT'", "'WORK'", "'WRAPPER'", "'X509'", 
		"'XA'", "'XML'", "'TINYINT'", "'SMALLINT'", "'MEDIUMINT'", "'INT'", "'INTEGER'", 
		"'BIGINT'", "'REAL'", "'DOUBLE'", "'FLOAT'", "'DECIMAL'", "'NUMERIC'", 
		"'DATE'", "'TIME'", "'TIMESTAMP'", "'DATETIME'", "'YEAR'", "'CHAR'", "'VARCHAR'", 
		"'BINARY'", "'VARBINARY'", "'TINYBLOB'", "'BLOB'", "'MEDIUMBLOB'", "'LONGBLOB'", 
		"'TINYTEXT'", "'TEXT'", "'MEDIUMTEXT'", "'LONGTEXT'", "'ENUM'", "'YEAR_MONTH'", 
		"'DAY_HOUR'", "'DAY_MINUTE'", "'DAY_SECOND'", "'HOUR_MINUTE'", "'HOUR_SECOND'", 
		"'MINUTE_SECOND'", "'SECOND_MICROSECOND'", "'MINUTE_MICROSECOND'", "'HOUR_MICROSECOND'", 
		"'DAY_MICROSECOND'", "'AVG'", "'BIT_AND'", "'BIT_OR'", "'BIT_XOR'", "'COUNT'", 
		"'GROUP_CONCAT'", "'MAX'", "'MIN'", "'STD'", "'STDDEV'", "'STDDEV_POP'", 
		"'STDDEV_SAMP'", "'SUM'", "'VAR_POP'", "'VAR_SAMP'", "'VARIANCE'", "'CURRENT_DATE'", 
		"'CURRENT_TIME'", "'CURRENT_TIMESTAMP'", "'LOCALTIME'", "'CURDATE'", "'CURTIME'", 
		"'DATE_ADD'", "'DATE_SUB'", "'EXTRACT'", "'LOCALTIMESTAMP'", "'NOW'", 
		"'POSITION'", "'SUBSTR'", "'SUBSTRING'", "'SYSDATE'", "'TRIM'", "'UTC_DATE'", 
		"'UTC_TIME'", "'UTC_TIMESTAMP'", "'QUARTER'", "'MONTH'", "'DAY'", "'HOUR'", 
		"'MINUTE'", "'WEEK'", "'SECOND'", "'MICROSECOND'", "':='", "'+='", "'-='", 
		"'*='", "'/='", "'%='", "'&='", "'^='", "'|='", "'*'", "'/'", "'%'", "'+'", 
		"'--'", "'-'", "'DIV'", "'MOD'", "'='", "'>'", "'<'", "'!'", "'~'", "'|'", 
		"'&'", "'^'", "'.'", "'('", "')'", "','", "';'", "'@'", "'0'", "'1'", 
		"'2'", "'''", "'\"'", "'`'", "':'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "SPACE", "SPEC_MYSQL_COMMENT", "COMMENT_INPUT", "LINE_COMMENT", 
		"ADD", "ALL", "ALTER", "ANALYZE", "AND", "AS", "ASC", "BEFORE", "BETWEEN", 
		"BOTH", "BY", "CALL", "CASCADE", "CASE", "CAST", "CHANGE", "CHARACTER", 
		"CHECK", "COLLATE", "COLUMN", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT", 
		"CREATE", "CROSS", "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", 
		"DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE", "DETERMINISTIC", 
		"DISTINCT", "DISTINCTROW", "DROP", "EACH", "ELSE", "ELSEIF", "ENCLOSED", 
		"ESCAPED", "EXISTS", "EXIT", "EXPLAIN", "FALSE", "FETCH", "FOR", "FORCE", 
		"FOREIGN", "FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING", "HIGH_PRIORITY", 
		"IF", "IGNORE", "IN", "INDEX", "INFILE", "INNER", "INOUT", "INSERT", "INTERVAL", 
		"INTO", "IS", "ITERATE", "JOIN", "KEY", "KEYS", "KILL", "LEADING", "LEAVE", 
		"LEFT", "LIKE", "LIMIT", "LINEAR", "LINES", "LOAD", "LOCK", "LOOP", "LOW_PRIORITY", 
		"MASTER_BIND", "MASTER_SSL_VERIFY_SERVER_CERT", "MATCH", "MAXVALUE", "MODIFIES", 
		"NATURAL", "NOT", "NO_WRITE_TO_BINLOG", "NULL_LITERAL", "ON", "OPTIMIZE", 
		"OPTION", "OPTIONALLY", "OR", "ORDER", "OUT", "OUTER", "OUTFILE", "PARTITION", 
		"PRIMARY", "PROCEDURE", "PURGE", "RANGE", "READ", "READS", "REFERENCES", 
		"REGEXP", "RELEASE", "RENAME", "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", 
		"RETURN", "REVOKE", "RIGHT", "RLIKE", "SCHEMA", "SCHEMAS", "SELECT", "SET", 
		"SEPARATOR", "SHOW", "SPATIAL", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING", 
		"SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL", "STARTING", 
		"STRAIGHT_JOIN", "TABLE", "TERMINATED", "THEN", "TO", "TRAILING", "TRIGGER", 
		"TRUE", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED", "UPDATE", "USAGE", 
		"USE", "USING", "VALUES", "WHEN", "WHERE", "WHILE", "WITH", "WRITE", "XOR", 
		"ZEROFILL", "AUTO_INCREMENT", "ACCOUNT", "ACTION", "AFTER", "AGGREGATE", 
		"ALGORITHM", "ANY", "AT", "AUTHORS", "AUTOCOMMIT", "AUTOEXTEND_SIZE", 
		"AVG_ROW_LENGTH", "BEGIN", "BINLOG", "BIT", "BLOCK", "BOOL", "BOOLEAN", 
		"BTREE", "CACHE", "CASCADED", "CHAIN", "CHANGED", "CHANNEL", "CHECKSUM", 
		"CIPHER", "CLIENT", "CLOSE", "COALESCE", "CODE", "COLUMNS", "COLUMN_FORMAT", 
		"COMMENT", "COMMIT", "COMPACT", "COMPLETION", "COMPRESSED", "COMPRESSION", 
		"CONCURRENT", "CONNECTION", "CONSISTENT", "CONTAINS", "CONTEXT", "CONTRIBUTORS", 
		"COPY", "CPU", "DATA", "DATAFILE", "DEALLOCATE", "DEFAULT_AUTH", "DEFINER", 
		"DELAY_KEY_WRITE", "DES_KEY_FILE", "DIRECTORY", "DISABLE", "DISCARD", 
		"DISK", "DO", "DUMPFILE", "DUPLICATE", "DYNAMIC", "ENABLE", "ENCRYPTION", 
		"END", "ENDS", "ENGINE", "ENGINES", "ERROR", "ERRORS", "ESCAPE", "EVEN", 
		"EVENT", "EVENTS", "EVERY", "EXCHANGE", "EXCLUSIVE", "EXPIRE", "EXPORT", 
		"EXTENDED", "EXTENT_SIZE", "FAST", "FAULTS", "FIELDS", "FILE_BLOCK_SIZE", 
		"FILTER", "FIRST", "FIXED", "FLUSH", "FOLLOWS", "FOUND", "FULL", "FUNCTION", 
		"GENERAL", "GLOBAL", "GRANTS", "GROUP_REPLICATION", "HANDLER", "HASH", 
		"HELP", "HOST", "HOSTS", "IDENTIFIED", "IGNORE_SERVER_IDS", "IMPORT", 
		"INDEXES", "INITIAL_SIZE", "INPLACE", "INSERT_METHOD", "INSTALL", "INSTANCE", 
		"INVOKER", "IO", "IO_THREAD", "IPC", "ISOLATION", "ISSUER", "JSON", "KEY_BLOCK_SIZE", 
		"LANGUAGE", "LAST", "LEAVES", "LESS", "LEVEL", "LIST", "LOCAL", "LOGFILE", 
		"LOGS", "MASTER", "MASTER_AUTO_POSITION", "MASTER_CONNECT_RETRY", "MASTER_DELAY", 
		"MASTER_HEARTBEAT_PERIOD", "MASTER_HOST", "MASTER_LOG_FILE", "MASTER_LOG_POS", 
		"MASTER_PASSWORD", "MASTER_PORT", "MASTER_RETRY_COUNT", "MASTER_SSL", 
		"MASTER_SSL_CA", "MASTER_SSL_CAPATH", "MASTER_SSL_CERT", "MASTER_SSL_CIPHER", 
		"MASTER_SSL_CRL", "MASTER_SSL_CRLPATH", "MASTER_SSL_KEY", "MASTER_TLS_VERSION", 
		"MASTER_USER", "MAX_CONNECTIONS_PER_HOUR", "MAX_QUERIES_PER_HOUR", "MAX_ROWS", 
		"MAX_SIZE", "MAX_UPDATES_PER_HOUR", "MAX_USER_CONNECTIONS", "MEDIUM", 
		"MERGE", "MID", "MIGRATE", "MIN_ROWS", "MODE", "MODIFY", "MUTEX", "MYSQL", 
		"NAME", "NAMES", "NCHAR", "NEVER", "NEXT", "NO", "NODEGROUP", "NONE", 
		"OFFLINE", "OFFSET", "OJ", "OLD_PASSWORD", "ONE", "ONLINE", "ONLY", "OPEN", 
		"OPTIMIZER_COSTS", "OPTIONS", "OWNER", "PACK_KEYS", "PAGE", "PARSER", 
		"PARTIAL", "PARTITIONING", "PARTITIONS", "PASSWORD", "PHASE", "PLUGIN", 
		"PLUGIN_DIR", "PLUGINS", "PORT", "PRECEDES", "PREPARE", "PRESERVE", "PREV", 
		"PROCESSLIST", "PROFILE", "PROFILES", "PROXY", "QUERY", "QUICK", "REBUILD", 
		"RECOVER", "REDO_BUFFER_SIZE", "REDUNDANT", "RELAY", "RELAY_LOG_FILE", 
		"RELAY_LOG_POS", "RELAYLOG", "REMOVE", "REORGANIZE", "REPAIR", "REPLICATE_DO_DB", 
		"REPLICATE_DO_TABLE", "REPLICATE_IGNORE_DB", "REPLICATE_IGNORE_TABLE", 
		"REPLICATE_REWRITE_DB", "REPLICATE_WILD_DO_TABLE", "REPLICATE_WILD_IGNORE_TABLE", 
		"REPLICATION", "RESET", "RESUME", "RETURNS", "ROLLBACK", "ROLLUP", "ROTATE", 
		"ROW", "ROWS", "ROW_FORMAT", "SAVEPOINT", "SCHEDULE", "SECURITY", "SERVER", 
		"SESSION", "SHARE", "SHARED", "SIGNED", "SIMPLE", "SLAVE", "SLOW", "SNAPSHOT", 
		"SOCKET", "SOME", "SONAME", "SOUNDS", "SOURCE", "SQL_AFTER_GTIDS", "SQL_AFTER_MTS_GAPS", 
		"SQL_BEFORE_GTIDS", "SQL_BUFFER_RESULT", "SQL_CACHE", "SQL_NO_CACHE", 
		"SQL_THREAD", "START", "STARTS", "STATS_AUTO_RECALC", "STATS_PERSISTENT", 
		"STATS_SAMPLE_PAGES", "STATUS", "STOP", "STORAGE", "STRING", "SUBJECT", 
		"SUBPARTITION", "SUBPARTITIONS", "SUSPEND", "SWAPS", "SWITCHES", "TABLESPACE", 
		"TEMPORARY", "TEMPTABLE", "THAN", "TRADITIONAL", "TRANSACTION", "TRIGGERS", 
		"TRUNCATE", "UNDEFINED", "UNDOFILE", "UNDO_BUFFER_SIZE", "UNINSTALL", 
		"UNKNOWN", "UNTIL", "UPGRADE", "USER", "USE_FRM", "USER_RESOURCES", "VALIDATION", 
		"VALUE", "VARIABLES", "VIEW", "WAIT", "WARNINGS", "WITHOUT", "WORK", "WRAPPER", 
		"X509", "XA", "XML", "TINYINT", "SMALLINT", "MEDIUMINT", "INT", "INTEGER", 
		"BIGINT", "REAL", "DOUBLE", "FLOAT", "DECIMAL", "NUMERIC", "DATE", "TIME", 
		"TIMESTAMP", "DATETIME", "YEAR", "CHAR", "VARCHAR", "BINARY", "VARBINARY", 
		"TINYBLOB", "BLOB", "MEDIUMBLOB", "LONGBLOB", "TINYTEXT", "TEXT", "MEDIUMTEXT", 
		"LONGTEXT", "ENUM", "YEAR_MONTH", "DAY_HOUR", "DAY_MINUTE", "DAY_SECOND", 
		"HOUR_MINUTE", "HOUR_SECOND", "MINUTE_SECOND", "SECOND_MICROSECOND", "MINUTE_MICROSECOND", 
		"HOUR_MICROSECOND", "DAY_MICROSECOND", "AVG", "BIT_AND", "BIT_OR", "BIT_XOR", 
		"COUNT", "GROUP_CONCAT", "MAX", "MIN", "STD", "STDDEV", "STDDEV_POP", 
		"STDDEV_SAMP", "SUM", "VAR_POP", "VAR_SAMP", "VARIANCE", "CURRENT_DATE", 
		"CURRENT_TIME", "CURRENT_TIMESTAMP", "LOCALTIME", "CURDATE", "CURTIME", 
		"DATE_ADD", "DATE_SUB", "EXTRACT", "LOCALTIMESTAMP", "NOW", "POSITION", 
		"SUBSTR", "SUBSTRING", "SYSDATE", "TRIM", "UTC_DATE", "UTC_TIME", "UTC_TIMESTAMP", 
		"QUARTER", "MONTH", "DAY", "HOUR", "MINUTE", "WEEK", "SECOND", "MICROSECOND", 
		"VAR_ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN", "MULT_ASSIGN", "DIV_ASSIGN", 
		"MOD_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "STAR", "DIVIDE", 
		"MODULE", "PLUS", "MINUSMINUS", "MINUS", "DIV", "MOD", "EQUAL_SYMBOL", 
		"GREATER_SYMBOL", "LESS_SYMBOL", "EXCLAMATION_SYMBOL", "BIT_NOT_OP", "BIT_OR_OP", 
		"BIT_AND_OP", "BIT_XOR_OP", "DOT", "LR_BRACKET", "RR_BRACKET", "COMMA", 
		"SEMI", "AT_SIGN", "ZERO_DECIMAL", "ONE_DECIMAL", "TWO_DECIMAL", "SINGLE_QUOTE_SYMB", 
		"DOUBLE_QUOTE_SYMB", "REVERSE_QUOTE_SYMB", "COLON_SYMB", "START_NATIONAL_STRING_LITERAL", 
		"STRING_LITERAL", "DECIMAL_LITERAL", "HEXADECIMAL_LITERAL", "REAL_LITERAL", 
		"NULL_SPEC_LITERAL", "BIT_STRING", "ID", "LOCAL_ID", "ERROR_RECONGNIGION"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "NaiveSqlParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public NaiveSqlParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class RootContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(NaiveSqlParser.EOF, 0); }
		public SqlStatementsContext sqlStatements() {
			return getRuleContext(SqlStatementsContext.class,0);
		}
		public TerminalNode MINUSMINUS() { return getToken(NaiveSqlParser.MINUSMINUS, 0); }
		public RootContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_root; }
	}

	public final RootContext root() throws RecognitionException {
		RootContext _localctx = new RootContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_root);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(159);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CREATE) | (1L << DELETE) | (1L << DROP))) != 0) || _la==INSERT || _la==SELECT || _la==LR_BRACKET || _la==SEMI) {
				{
				setState(158);
				sqlStatements();
				}
			}

			setState(162);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==MINUSMINUS) {
				{
				setState(161);
				match(MINUSMINUS);
				}
			}

			setState(164);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SqlStatementsContext extends ParserRuleContext {
		public List<SqlStatementContext> sqlStatement() {
			return getRuleContexts(SqlStatementContext.class);
		}
		public SqlStatementContext sqlStatement(int i) {
			return getRuleContext(SqlStatementContext.class,i);
		}
		public List<EmptyStatementContext> emptyStatement() {
			return getRuleContexts(EmptyStatementContext.class);
		}
		public EmptyStatementContext emptyStatement(int i) {
			return getRuleContext(EmptyStatementContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(NaiveSqlParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(NaiveSqlParser.SEMI, i);
		}
		public List<TerminalNode> MINUSMINUS() { return getTokens(NaiveSqlParser.MINUSMINUS); }
		public TerminalNode MINUSMINUS(int i) {
			return getToken(NaiveSqlParser.MINUSMINUS, i);
		}
		public SqlStatementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sqlStatements; }
	}

	public final SqlStatementsContext sqlStatements() throws RecognitionException {
		SqlStatementsContext _localctx = new SqlStatementsContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_sqlStatements);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(175);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					setState(173);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case CREATE:
					case DELETE:
					case DROP:
					case INSERT:
					case SELECT:
					case LR_BRACKET:
						{
						setState(166);
						sqlStatement();
						setState(168);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==MINUSMINUS) {
							{
							setState(167);
							match(MINUSMINUS);
							}
						}

						setState(170);
						match(SEMI);
						}
						break;
					case SEMI:
						{
						setState(172);
						emptyStatement();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					} 
				}
				setState(177);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			}
			setState(186);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CREATE:
			case DELETE:
			case DROP:
			case INSERT:
			case SELECT:
			case LR_BRACKET:
				{
				setState(178);
				sqlStatement();
				setState(183);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
				case 1:
					{
					setState(180);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==MINUSMINUS) {
						{
						setState(179);
						match(MINUSMINUS);
						}
					}

					setState(182);
					match(SEMI);
					}
					break;
				}
				}
				break;
			case SEMI:
				{
				setState(185);
				emptyStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SqlStatementContext extends ParserRuleContext {
		public DdlStatementContext ddlStatement() {
			return getRuleContext(DdlStatementContext.class,0);
		}
		public DmlStatementContext dmlStatement() {
			return getRuleContext(DmlStatementContext.class,0);
		}
		public SqlStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sqlStatement; }
	}

	public final SqlStatementContext sqlStatement() throws RecognitionException {
		SqlStatementContext _localctx = new SqlStatementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_sqlStatement);
		try {
			setState(190);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CREATE:
			case DROP:
				enterOuterAlt(_localctx, 1);
				{
				setState(188);
				ddlStatement();
				}
				break;
			case DELETE:
			case INSERT:
			case SELECT:
			case LR_BRACKET:
				enterOuterAlt(_localctx, 2);
				{
				setState(189);
				dmlStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EmptyStatementContext extends ParserRuleContext {
		public TerminalNode SEMI() { return getToken(NaiveSqlParser.SEMI, 0); }
		public EmptyStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_emptyStatement; }
	}

	public final EmptyStatementContext emptyStatement() throws RecognitionException {
		EmptyStatementContext _localctx = new EmptyStatementContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_emptyStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DdlStatementContext extends ParserRuleContext {
		public CreateTableContext createTable() {
			return getRuleContext(CreateTableContext.class,0);
		}
		public DropTableContext dropTable() {
			return getRuleContext(DropTableContext.class,0);
		}
		public DdlStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ddlStatement; }
	}

	public final DdlStatementContext ddlStatement() throws RecognitionException {
		DdlStatementContext _localctx = new DdlStatementContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_ddlStatement);
		try {
			setState(196);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CREATE:
				enterOuterAlt(_localctx, 1);
				{
				setState(194);
				createTable();
				}
				break;
			case DROP:
				enterOuterAlt(_localctx, 2);
				{
				setState(195);
				dropTable();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CreateTableContext extends ParserRuleContext {
		public CreateTableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_createTable; }
	 
		public CreateTableContext() { }
		public void copyFrom(CreateTableContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ColumnCreateTableContext extends CreateTableContext {
		public TerminalNode CREATE() { return getToken(NaiveSqlParser.CREATE, 0); }
		public TerminalNode TABLE() { return getToken(NaiveSqlParser.TABLE, 0); }
		public TableNameContext tableName() {
			return getRuleContext(TableNameContext.class,0);
		}
		public CreateDefinitionsContext createDefinitions() {
			return getRuleContext(CreateDefinitionsContext.class,0);
		}
		public IfNotExistsContext ifNotExists() {
			return getRuleContext(IfNotExistsContext.class,0);
		}
		public ColumnCreateTableContext(CreateTableContext ctx) { copyFrom(ctx); }
	}

	public final CreateTableContext createTable() throws RecognitionException {
		CreateTableContext _localctx = new CreateTableContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_createTable);
		int _la;
		try {
			_localctx = new ColumnCreateTableContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(198);
			match(CREATE);
			setState(199);
			match(TABLE);
			setState(201);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==IF) {
				{
				setState(200);
				ifNotExists();
				}
			}

			setState(203);
			tableName();
			setState(204);
			createDefinitions();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CreateDefinitionsContext extends ParserRuleContext {
		public List<CreateDefinitionContext> createDefinition() {
			return getRuleContexts(CreateDefinitionContext.class);
		}
		public CreateDefinitionContext createDefinition(int i) {
			return getRuleContext(CreateDefinitionContext.class,i);
		}
		public CreateDefinitionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_createDefinitions; }
	}

	public final CreateDefinitionsContext createDefinitions() throws RecognitionException {
		CreateDefinitionsContext _localctx = new CreateDefinitionsContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_createDefinitions);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(206);
			match(LR_BRACKET);
			setState(207);
			createDefinition();
			setState(212);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(208);
				match(COMMA);
				setState(209);
				createDefinition();
				}
				}
				setState(214);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(215);
			match(RR_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CreateDefinitionContext extends ParserRuleContext {
		public CreateDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_createDefinition; }
	 
		public CreateDefinitionContext() { }
		public void copyFrom(CreateDefinitionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ColumnDeclarationContext extends CreateDefinitionContext {
		public UidContext uid() {
			return getRuleContext(UidContext.class,0);
		}
		public ColumnDefinitionContext columnDefinition() {
			return getRuleContext(ColumnDefinitionContext.class,0);
		}
		public ColumnDeclarationContext(CreateDefinitionContext ctx) { copyFrom(ctx); }
	}

	public final CreateDefinitionContext createDefinition() throws RecognitionException {
		CreateDefinitionContext _localctx = new CreateDefinitionContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_createDefinition);
		try {
			_localctx = new ColumnDeclarationContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(217);
			uid();
			setState(218);
			columnDefinition();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ColumnDefinitionContext extends ParserRuleContext {
		public DataTypeContext dataType() {
			return getRuleContext(DataTypeContext.class,0);
		}
		public List<ColumnConstraintContext> columnConstraint() {
			return getRuleContexts(ColumnConstraintContext.class);
		}
		public ColumnConstraintContext columnConstraint(int i) {
			return getRuleContext(ColumnConstraintContext.class,i);
		}
		public ColumnDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_columnDefinition; }
	}

	public final ColumnDefinitionContext columnDefinition() throws RecognitionException {
		ColumnDefinitionContext _localctx = new ColumnDefinitionContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_columnDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(220);
			dataType();
			setState(224);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 36)) & ~0x3f) == 0 && ((1L << (_la - 36)) & ((1L << (DEFAULT - 36)) | (1L << (KEY - 36)) | (1L << (NOT - 36)) | (1L << (NULL_LITERAL - 36)))) != 0) || ((((_la - 110)) & ~0x3f) == 0 && ((1L << (_la - 110)) & ((1L << (PRIMARY - 110)) | (1L << (UNIQUE - 110)) | (1L << (AUTO_INCREMENT - 110)))) != 0) || _la==NULL_SPEC_LITERAL) {
				{
				{
				setState(221);
				columnConstraint();
				}
				}
				setState(226);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ColumnConstraintContext extends ParserRuleContext {
		public ColumnConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_columnConstraint; }
	 
		public ColumnConstraintContext() { }
		public void copyFrom(ColumnConstraintContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class AutoIncrementColumnConstraintContext extends ColumnConstraintContext {
		public TerminalNode AUTO_INCREMENT() { return getToken(NaiveSqlParser.AUTO_INCREMENT, 0); }
		public AutoIncrementColumnConstraintContext(ColumnConstraintContext ctx) { copyFrom(ctx); }
	}
	public static class PrimaryKeyColumnConstraintContext extends ColumnConstraintContext {
		public TerminalNode KEY() { return getToken(NaiveSqlParser.KEY, 0); }
		public TerminalNode PRIMARY() { return getToken(NaiveSqlParser.PRIMARY, 0); }
		public PrimaryKeyColumnConstraintContext(ColumnConstraintContext ctx) { copyFrom(ctx); }
	}
	public static class UniqueKeyColumnConstraintContext extends ColumnConstraintContext {
		public TerminalNode UNIQUE() { return getToken(NaiveSqlParser.UNIQUE, 0); }
		public TerminalNode KEY() { return getToken(NaiveSqlParser.KEY, 0); }
		public UniqueKeyColumnConstraintContext(ColumnConstraintContext ctx) { copyFrom(ctx); }
	}
	public static class NullColumnConstraintContext extends ColumnConstraintContext {
		public NullNotnullContext nullNotnull() {
			return getRuleContext(NullNotnullContext.class,0);
		}
		public NullColumnConstraintContext(ColumnConstraintContext ctx) { copyFrom(ctx); }
	}
	public static class DefaultColumnConstraintContext extends ColumnConstraintContext {
		public TerminalNode DEFAULT() { return getToken(NaiveSqlParser.DEFAULT, 0); }
		public DefaultValueContext defaultValue() {
			return getRuleContext(DefaultValueContext.class,0);
		}
		public DefaultColumnConstraintContext(ColumnConstraintContext ctx) { copyFrom(ctx); }
	}

	public final ColumnConstraintContext columnConstraint() throws RecognitionException {
		ColumnConstraintContext _localctx = new ColumnConstraintContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_columnConstraint);
		int _la;
		try {
			setState(239);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NOT:
			case NULL_LITERAL:
			case NULL_SPEC_LITERAL:
				_localctx = new NullColumnConstraintContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(227);
				nullNotnull();
				}
				break;
			case DEFAULT:
				_localctx = new DefaultColumnConstraintContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(228);
				match(DEFAULT);
				setState(229);
				defaultValue();
				}
				break;
			case AUTO_INCREMENT:
				_localctx = new AutoIncrementColumnConstraintContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(230);
				match(AUTO_INCREMENT);
				}
				break;
			case KEY:
			case PRIMARY:
				_localctx = new PrimaryKeyColumnConstraintContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(232);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==PRIMARY) {
					{
					setState(231);
					match(PRIMARY);
					}
				}

				setState(234);
				match(KEY);
				}
				break;
			case UNIQUE:
				_localctx = new UniqueKeyColumnConstraintContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(235);
				match(UNIQUE);
				setState(237);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(236);
					match(KEY);
					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DropTableContext extends ParserRuleContext {
		public Token dropType;
		public TerminalNode DROP() { return getToken(NaiveSqlParser.DROP, 0); }
		public TerminalNode TABLE() { return getToken(NaiveSqlParser.TABLE, 0); }
		public TablesContext tables() {
			return getRuleContext(TablesContext.class,0);
		}
		public IfExistsContext ifExists() {
			return getRuleContext(IfExistsContext.class,0);
		}
		public TerminalNode RESTRICT() { return getToken(NaiveSqlParser.RESTRICT, 0); }
		public TerminalNode CASCADE() { return getToken(NaiveSqlParser.CASCADE, 0); }
		public DropTableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dropTable; }
	}

	public final DropTableContext dropTable() throws RecognitionException {
		DropTableContext _localctx = new DropTableContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_dropTable);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(241);
			match(DROP);
			setState(242);
			match(TABLE);
			setState(244);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==IF) {
				{
				setState(243);
				ifExists();
				}
			}

			setState(246);
			tables();
			setState(248);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==CASCADE || _la==RESTRICT) {
				{
				setState(247);
				((DropTableContext)_localctx).dropType = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==CASCADE || _la==RESTRICT) ) {
					((DropTableContext)_localctx).dropType = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DmlStatementContext extends ParserRuleContext {
		public SelectStatementContext selectStatement() {
			return getRuleContext(SelectStatementContext.class,0);
		}
		public DeleteStatementContext deleteStatement() {
			return getRuleContext(DeleteStatementContext.class,0);
		}
		public InsertStatementContext insertStatement() {
			return getRuleContext(InsertStatementContext.class,0);
		}
		public DmlStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dmlStatement; }
	}

	public final DmlStatementContext dmlStatement() throws RecognitionException {
		DmlStatementContext _localctx = new DmlStatementContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_dmlStatement);
		try {
			setState(253);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SELECT:
			case LR_BRACKET:
				enterOuterAlt(_localctx, 1);
				{
				setState(250);
				selectStatement();
				}
				break;
			case DELETE:
				enterOuterAlt(_localctx, 2);
				{
				setState(251);
				deleteStatement();
				}
				break;
			case INSERT:
				enterOuterAlt(_localctx, 3);
				{
				setState(252);
				insertStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectStatementContext extends ParserRuleContext {
		public SelectStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectStatement; }
	 
		public SelectStatementContext() { }
		public void copyFrom(SelectStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class UnionSelectContext extends SelectStatementContext {
		public Token unionType;
		public QuerySpecificationNointoContext querySpecificationNointo() {
			return getRuleContext(QuerySpecificationNointoContext.class,0);
		}
		public List<UnionStatementContext> unionStatement() {
			return getRuleContexts(UnionStatementContext.class);
		}
		public UnionStatementContext unionStatement(int i) {
			return getRuleContext(UnionStatementContext.class,i);
		}
		public TerminalNode UNION() { return getToken(NaiveSqlParser.UNION, 0); }
		public OrderByClauseContext orderByClause() {
			return getRuleContext(OrderByClauseContext.class,0);
		}
		public LimitClauseContext limitClause() {
			return getRuleContext(LimitClauseContext.class,0);
		}
		public QuerySpecificationContext querySpecification() {
			return getRuleContext(QuerySpecificationContext.class,0);
		}
		public QueryExpressionContext queryExpression() {
			return getRuleContext(QueryExpressionContext.class,0);
		}
		public TerminalNode ALL() { return getToken(NaiveSqlParser.ALL, 0); }
		public TerminalNode DISTINCT() { return getToken(NaiveSqlParser.DISTINCT, 0); }
		public UnionSelectContext(SelectStatementContext ctx) { copyFrom(ctx); }
	}
	public static class UnionParenthesisSelectContext extends SelectStatementContext {
		public Token unionType;
		public QueryExpressionNointoContext queryExpressionNointo() {
			return getRuleContext(QueryExpressionNointoContext.class,0);
		}
		public List<UnionParenthesisContext> unionParenthesis() {
			return getRuleContexts(UnionParenthesisContext.class);
		}
		public UnionParenthesisContext unionParenthesis(int i) {
			return getRuleContext(UnionParenthesisContext.class,i);
		}
		public TerminalNode UNION() { return getToken(NaiveSqlParser.UNION, 0); }
		public QueryExpressionContext queryExpression() {
			return getRuleContext(QueryExpressionContext.class,0);
		}
		public OrderByClauseContext orderByClause() {
			return getRuleContext(OrderByClauseContext.class,0);
		}
		public LimitClauseContext limitClause() {
			return getRuleContext(LimitClauseContext.class,0);
		}
		public TerminalNode ALL() { return getToken(NaiveSqlParser.ALL, 0); }
		public TerminalNode DISTINCT() { return getToken(NaiveSqlParser.DISTINCT, 0); }
		public UnionParenthesisSelectContext(SelectStatementContext ctx) { copyFrom(ctx); }
	}
	public static class SimpleSelectContext extends SelectStatementContext {
		public QuerySpecificationContext querySpecification() {
			return getRuleContext(QuerySpecificationContext.class,0);
		}
		public SimpleSelectContext(SelectStatementContext ctx) { copyFrom(ctx); }
	}
	public static class ParenthesisSelectContext extends SelectStatementContext {
		public QueryExpressionContext queryExpression() {
			return getRuleContext(QueryExpressionContext.class,0);
		}
		public ParenthesisSelectContext(SelectStatementContext ctx) { copyFrom(ctx); }
	}

	public final SelectStatementContext selectStatement() throws RecognitionException {
		SelectStatementContext _localctx = new SelectStatementContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_selectStatement);
		int _la;
		try {
			int _alt;
			setState(298);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				_localctx = new SimpleSelectContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(255);
				querySpecification();
				}
				break;
			case 2:
				_localctx = new ParenthesisSelectContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(256);
				queryExpression();
				}
				break;
			case 3:
				_localctx = new UnionSelectContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(257);
				querySpecificationNointo();
				setState(259); 
				_errHandler.sync(this);
				_alt = 1;
				do {
					switch (_alt) {
					case 1:
						{
						{
						setState(258);
						unionStatement();
						}
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					setState(261); 
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
				} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
				setState(271);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==UNION) {
					{
					setState(263);
					match(UNION);
					setState(265);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==ALL || _la==DISTINCT) {
						{
						setState(264);
						((UnionSelectContext)_localctx).unionType = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==ALL || _la==DISTINCT) ) {
							((UnionSelectContext)_localctx).unionType = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						}
					}

					setState(269);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case SELECT:
						{
						setState(267);
						querySpecification();
						}
						break;
					case LR_BRACKET:
						{
						setState(268);
						queryExpression();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
				}

				setState(274);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ORDER) {
					{
					setState(273);
					orderByClause();
					}
				}

				setState(277);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LIMIT) {
					{
					setState(276);
					limitClause();
					}
				}

				}
				break;
			case 4:
				_localctx = new UnionParenthesisSelectContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(279);
				queryExpressionNointo();
				setState(281); 
				_errHandler.sync(this);
				_alt = 1;
				do {
					switch (_alt) {
					case 1:
						{
						{
						setState(280);
						unionParenthesis();
						}
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					setState(283); 
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
				} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
				setState(290);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==UNION) {
					{
					setState(285);
					match(UNION);
					setState(287);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==ALL || _la==DISTINCT) {
						{
						setState(286);
						((UnionParenthesisSelectContext)_localctx).unionType = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==ALL || _la==DISTINCT) ) {
							((UnionParenthesisSelectContext)_localctx).unionType = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						}
					}

					setState(289);
					queryExpression();
					}
				}

				setState(293);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ORDER) {
					{
					setState(292);
					orderByClause();
					}
				}

				setState(296);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LIMIT) {
					{
					setState(295);
					limitClause();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QueryExpressionContext extends ParserRuleContext {
		public QuerySpecificationContext querySpecification() {
			return getRuleContext(QuerySpecificationContext.class,0);
		}
		public QueryExpressionContext queryExpression() {
			return getRuleContext(QueryExpressionContext.class,0);
		}
		public QueryExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_queryExpression; }
	}

	public final QueryExpressionContext queryExpression() throws RecognitionException {
		QueryExpressionContext _localctx = new QueryExpressionContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_queryExpression);
		try {
			setState(308);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(300);
				match(LR_BRACKET);
				setState(301);
				querySpecification();
				setState(302);
				match(RR_BRACKET);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(304);
				match(LR_BRACKET);
				setState(305);
				queryExpression();
				setState(306);
				match(RR_BRACKET);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QueryExpressionNointoContext extends ParserRuleContext {
		public QuerySpecificationNointoContext querySpecificationNointo() {
			return getRuleContext(QuerySpecificationNointoContext.class,0);
		}
		public QueryExpressionNointoContext queryExpressionNointo() {
			return getRuleContext(QueryExpressionNointoContext.class,0);
		}
		public QueryExpressionNointoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_queryExpressionNointo; }
	}

	public final QueryExpressionNointoContext queryExpressionNointo() throws RecognitionException {
		QueryExpressionNointoContext _localctx = new QueryExpressionNointoContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_queryExpressionNointo);
		try {
			setState(318);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(310);
				match(LR_BRACKET);
				setState(311);
				querySpecificationNointo();
				setState(312);
				match(RR_BRACKET);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(314);
				match(LR_BRACKET);
				setState(315);
				queryExpressionNointo();
				setState(316);
				match(RR_BRACKET);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QuerySpecificationContext extends ParserRuleContext {
		public TerminalNode SELECT() { return getToken(NaiveSqlParser.SELECT, 0); }
		public SelectElementsContext selectElements() {
			return getRuleContext(SelectElementsContext.class,0);
		}
		public List<SelectSpecContext> selectSpec() {
			return getRuleContexts(SelectSpecContext.class);
		}
		public SelectSpecContext selectSpec(int i) {
			return getRuleContext(SelectSpecContext.class,i);
		}
		public SelectIntoExpressionContext selectIntoExpression() {
			return getRuleContext(SelectIntoExpressionContext.class,0);
		}
		public FromClauseContext fromClause() {
			return getRuleContext(FromClauseContext.class,0);
		}
		public OrderByClauseContext orderByClause() {
			return getRuleContext(OrderByClauseContext.class,0);
		}
		public LimitClauseContext limitClause() {
			return getRuleContext(LimitClauseContext.class,0);
		}
		public QuerySpecificationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_querySpecification; }
	}

	public final QuerySpecificationContext querySpecification() throws RecognitionException {
		QuerySpecificationContext _localctx = new QuerySpecificationContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_querySpecification);
		int _la;
		try {
			setState(360);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(320);
				match(SELECT);
				setState(324);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ALL) | (1L << DISTINCT) | (1L << DISTINCTROW) | (1L << HIGH_PRIORITY))) != 0) || ((((_la - 140)) & ~0x3f) == 0 && ((1L << (_la - 140)) & ((1L << (SQL_CALC_FOUND_ROWS - 140)) | (1L << (SQL_SMALL_RESULT - 140)) | (1L << (STRAIGHT_JOIN - 140)))) != 0)) {
					{
					{
					setState(321);
					selectSpec();
					}
					}
					setState(326);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(327);
				selectElements();
				setState(329);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==INTO) {
					{
					setState(328);
					selectIntoExpression();
					}
				}

				setState(332);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==FROM) {
					{
					setState(331);
					fromClause();
					}
				}

				setState(335);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
				case 1:
					{
					setState(334);
					orderByClause();
					}
					break;
				}
				setState(338);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
				case 1:
					{
					setState(337);
					limitClause();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(340);
				match(SELECT);
				setState(344);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ALL) | (1L << DISTINCT) | (1L << DISTINCTROW) | (1L << HIGH_PRIORITY))) != 0) || ((((_la - 140)) & ~0x3f) == 0 && ((1L << (_la - 140)) & ((1L << (SQL_CALC_FOUND_ROWS - 140)) | (1L << (SQL_SMALL_RESULT - 140)) | (1L << (STRAIGHT_JOIN - 140)))) != 0)) {
					{
					{
					setState(341);
					selectSpec();
					}
					}
					setState(346);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(347);
				selectElements();
				setState(349);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==FROM) {
					{
					setState(348);
					fromClause();
					}
				}

				setState(352);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
				case 1:
					{
					setState(351);
					orderByClause();
					}
					break;
				}
				setState(355);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
				case 1:
					{
					setState(354);
					limitClause();
					}
					break;
				}
				setState(358);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==INTO) {
					{
					setState(357);
					selectIntoExpression();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QuerySpecificationNointoContext extends ParserRuleContext {
		public TerminalNode SELECT() { return getToken(NaiveSqlParser.SELECT, 0); }
		public SelectElementsContext selectElements() {
			return getRuleContext(SelectElementsContext.class,0);
		}
		public List<SelectSpecContext> selectSpec() {
			return getRuleContexts(SelectSpecContext.class);
		}
		public SelectSpecContext selectSpec(int i) {
			return getRuleContext(SelectSpecContext.class,i);
		}
		public FromClauseContext fromClause() {
			return getRuleContext(FromClauseContext.class,0);
		}
		public OrderByClauseContext orderByClause() {
			return getRuleContext(OrderByClauseContext.class,0);
		}
		public LimitClauseContext limitClause() {
			return getRuleContext(LimitClauseContext.class,0);
		}
		public QuerySpecificationNointoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_querySpecificationNointo; }
	}

	public final QuerySpecificationNointoContext querySpecificationNointo() throws RecognitionException {
		QuerySpecificationNointoContext _localctx = new QuerySpecificationNointoContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_querySpecificationNointo);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(362);
			match(SELECT);
			setState(366);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ALL) | (1L << DISTINCT) | (1L << DISTINCTROW) | (1L << HIGH_PRIORITY))) != 0) || ((((_la - 140)) & ~0x3f) == 0 && ((1L << (_la - 140)) & ((1L << (SQL_CALC_FOUND_ROWS - 140)) | (1L << (SQL_SMALL_RESULT - 140)) | (1L << (STRAIGHT_JOIN - 140)))) != 0)) {
				{
				{
				setState(363);
				selectSpec();
				}
				}
				setState(368);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(369);
			selectElements();
			setState(371);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==FROM) {
				{
				setState(370);
				fromClause();
				}
			}

			setState(374);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				{
				setState(373);
				orderByClause();
				}
				break;
			}
			setState(377);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				{
				setState(376);
				limitClause();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnionParenthesisContext extends ParserRuleContext {
		public Token unionType;
		public TerminalNode UNION() { return getToken(NaiveSqlParser.UNION, 0); }
		public QueryExpressionNointoContext queryExpressionNointo() {
			return getRuleContext(QueryExpressionNointoContext.class,0);
		}
		public TerminalNode ALL() { return getToken(NaiveSqlParser.ALL, 0); }
		public TerminalNode DISTINCT() { return getToken(NaiveSqlParser.DISTINCT, 0); }
		public UnionParenthesisContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unionParenthesis; }
	}

	public final UnionParenthesisContext unionParenthesis() throws RecognitionException {
		UnionParenthesisContext _localctx = new UnionParenthesisContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_unionParenthesis);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(379);
			match(UNION);
			setState(381);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ALL || _la==DISTINCT) {
				{
				setState(380);
				((UnionParenthesisContext)_localctx).unionType = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==ALL || _la==DISTINCT) ) {
					((UnionParenthesisContext)_localctx).unionType = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(383);
			queryExpressionNointo();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnionStatementContext extends ParserRuleContext {
		public Token unionType;
		public TerminalNode UNION() { return getToken(NaiveSqlParser.UNION, 0); }
		public QuerySpecificationNointoContext querySpecificationNointo() {
			return getRuleContext(QuerySpecificationNointoContext.class,0);
		}
		public QueryExpressionNointoContext queryExpressionNointo() {
			return getRuleContext(QueryExpressionNointoContext.class,0);
		}
		public TerminalNode ALL() { return getToken(NaiveSqlParser.ALL, 0); }
		public TerminalNode DISTINCT() { return getToken(NaiveSqlParser.DISTINCT, 0); }
		public UnionStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unionStatement; }
	}

	public final UnionStatementContext unionStatement() throws RecognitionException {
		UnionStatementContext _localctx = new UnionStatementContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_unionStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(385);
			match(UNION);
			setState(387);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ALL || _la==DISTINCT) {
				{
				setState(386);
				((UnionStatementContext)_localctx).unionType = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==ALL || _la==DISTINCT) ) {
					((UnionStatementContext)_localctx).unionType = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(391);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SELECT:
				{
				setState(389);
				querySpecificationNointo();
				}
				break;
			case LR_BRACKET:
				{
				setState(390);
				queryExpressionNointo();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectSpecContext extends ParserRuleContext {
		public TerminalNode ALL() { return getToken(NaiveSqlParser.ALL, 0); }
		public TerminalNode DISTINCT() { return getToken(NaiveSqlParser.DISTINCT, 0); }
		public TerminalNode DISTINCTROW() { return getToken(NaiveSqlParser.DISTINCTROW, 0); }
		public TerminalNode HIGH_PRIORITY() { return getToken(NaiveSqlParser.HIGH_PRIORITY, 0); }
		public TerminalNode STRAIGHT_JOIN() { return getToken(NaiveSqlParser.STRAIGHT_JOIN, 0); }
		public TerminalNode SQL_SMALL_RESULT() { return getToken(NaiveSqlParser.SQL_SMALL_RESULT, 0); }
		public TerminalNode SQL_CALC_FOUND_ROWS() { return getToken(NaiveSqlParser.SQL_CALC_FOUND_ROWS, 0); }
		public SelectSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectSpec; }
	}

	public final SelectSpecContext selectSpec() throws RecognitionException {
		SelectSpecContext _localctx = new SelectSpecContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_selectSpec);
		int _la;
		try {
			setState(398);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ALL:
			case DISTINCT:
			case DISTINCTROW:
				enterOuterAlt(_localctx, 1);
				{
				setState(393);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ALL) | (1L << DISTINCT) | (1L << DISTINCTROW))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HIGH_PRIORITY:
				enterOuterAlt(_localctx, 2);
				{
				setState(394);
				match(HIGH_PRIORITY);
				}
				break;
			case STRAIGHT_JOIN:
				enterOuterAlt(_localctx, 3);
				{
				setState(395);
				match(STRAIGHT_JOIN);
				}
				break;
			case SQL_SMALL_RESULT:
				enterOuterAlt(_localctx, 4);
				{
				setState(396);
				match(SQL_SMALL_RESULT);
				}
				break;
			case SQL_CALC_FOUND_ROWS:
				enterOuterAlt(_localctx, 5);
				{
				setState(397);
				match(SQL_CALC_FOUND_ROWS);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectElementsContext extends ParserRuleContext {
		public Token star;
		public List<SelectElementContext> selectElement() {
			return getRuleContexts(SelectElementContext.class);
		}
		public SelectElementContext selectElement(int i) {
			return getRuleContext(SelectElementContext.class,i);
		}
		public SelectElementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectElements; }
	}

	public final SelectElementsContext selectElements() throws RecognitionException {
		SelectElementsContext _localctx = new SelectElementsContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_selectElements);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(402);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STAR:
				{
				setState(400);
				((SelectElementsContext)_localctx).star = match(STAR);
				}
				break;
			case ID:
				{
				setState(401);
				selectElement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(408);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(404);
				match(COMMA);
				setState(405);
				selectElement();
				}
				}
				setState(410);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectElementContext extends ParserRuleContext {
		public SelectElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectElement; }
	 
		public SelectElementContext() { }
		public void copyFrom(SelectElementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class SelectStarElementContext extends SelectElementContext {
		public FullIdContext fullId() {
			return getRuleContext(FullIdContext.class,0);
		}
		public SelectStarElementContext(SelectElementContext ctx) { copyFrom(ctx); }
	}
	public static class SelectColumnElementContext extends SelectElementContext {
		public FullIdContext fullId() {
			return getRuleContext(FullIdContext.class,0);
		}
		public UidContext uid() {
			return getRuleContext(UidContext.class,0);
		}
		public TerminalNode AS() { return getToken(NaiveSqlParser.AS, 0); }
		public SelectColumnElementContext(SelectElementContext ctx) { copyFrom(ctx); }
	}

	public final SelectElementContext selectElement() throws RecognitionException {
		SelectElementContext _localctx = new SelectElementContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_selectElement);
		int _la;
		try {
			setState(422);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				_localctx = new SelectStarElementContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(411);
				fullId();
				setState(412);
				match(DOT);
				setState(413);
				match(STAR);
				}
				break;
			case 2:
				_localctx = new SelectColumnElementContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(415);
				fullId();
				setState(420);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
				case 1:
					{
					setState(417);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==AS) {
						{
						setState(416);
						match(AS);
						}
					}

					setState(419);
					uid();
					}
					break;
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectIntoExpressionContext extends ParserRuleContext {
		public SelectIntoExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectIntoExpression; }
	 
		public SelectIntoExpressionContext() { }
		public void copyFrom(SelectIntoExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class SelectIntoVariablesContext extends SelectIntoExpressionContext {
		public TerminalNode INTO() { return getToken(NaiveSqlParser.INTO, 0); }
		public List<AssignmentFieldContext> assignmentField() {
			return getRuleContexts(AssignmentFieldContext.class);
		}
		public AssignmentFieldContext assignmentField(int i) {
			return getRuleContext(AssignmentFieldContext.class,i);
		}
		public SelectIntoVariablesContext(SelectIntoExpressionContext ctx) { copyFrom(ctx); }
	}

	public final SelectIntoExpressionContext selectIntoExpression() throws RecognitionException {
		SelectIntoExpressionContext _localctx = new SelectIntoExpressionContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_selectIntoExpression);
		int _la;
		try {
			_localctx = new SelectIntoVariablesContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(424);
			match(INTO);
			setState(425);
			assignmentField();
			setState(430);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(426);
				match(COMMA);
				setState(427);
				assignmentField();
				}
				}
				setState(432);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeleteStatementContext extends ParserRuleContext {
		public SingleDeleteStatementContext singleDeleteStatement() {
			return getRuleContext(SingleDeleteStatementContext.class,0);
		}
		public DeleteStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_deleteStatement; }
	}

	public final DeleteStatementContext deleteStatement() throws RecognitionException {
		DeleteStatementContext _localctx = new DeleteStatementContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_deleteStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(433);
			singleDeleteStatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SingleDeleteStatementContext extends ParserRuleContext {
		public TerminalNode DELETE() { return getToken(NaiveSqlParser.DELETE, 0); }
		public TerminalNode FROM() { return getToken(NaiveSqlParser.FROM, 0); }
		public TableNameContext tableName() {
			return getRuleContext(TableNameContext.class,0);
		}
		public TerminalNode PARTITION() { return getToken(NaiveSqlParser.PARTITION, 0); }
		public UidListContext uidList() {
			return getRuleContext(UidListContext.class,0);
		}
		public TerminalNode WHERE() { return getToken(NaiveSqlParser.WHERE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public OrderByClauseContext orderByClause() {
			return getRuleContext(OrderByClauseContext.class,0);
		}
		public TerminalNode LIMIT() { return getToken(NaiveSqlParser.LIMIT, 0); }
		public DecimalLiteralContext decimalLiteral() {
			return getRuleContext(DecimalLiteralContext.class,0);
		}
		public SingleDeleteStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleDeleteStatement; }
	}

	public final SingleDeleteStatementContext singleDeleteStatement() throws RecognitionException {
		SingleDeleteStatementContext _localctx = new SingleDeleteStatementContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_singleDeleteStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(435);
			match(DELETE);
			setState(436);
			match(FROM);
			setState(437);
			tableName();
			setState(443);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PARTITION) {
				{
				setState(438);
				match(PARTITION);
				setState(439);
				match(LR_BRACKET);
				setState(440);
				uidList();
				setState(441);
				match(RR_BRACKET);
				}
			}

			setState(447);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(445);
				match(WHERE);
				setState(446);
				expression(0);
				}
			}

			setState(450);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ORDER) {
				{
				setState(449);
				orderByClause();
				}
			}

			setState(454);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LIMIT) {
				{
				setState(452);
				match(LIMIT);
				setState(453);
				decimalLiteral();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InsertStatementContext extends ParserRuleContext {
		public Token priority;
		public UidListContext columns;
		public UpdatedElementContext setFirst;
		public UpdatedElementContext updatedElement;
		public List<UpdatedElementContext> setElements = new ArrayList<UpdatedElementContext>();
		public TerminalNode INSERT() { return getToken(NaiveSqlParser.INSERT, 0); }
		public TableNameContext tableName() {
			return getRuleContext(TableNameContext.class,0);
		}
		public InsertStatementValueContext insertStatementValue() {
			return getRuleContext(InsertStatementValueContext.class,0);
		}
		public TerminalNode SET() { return getToken(NaiveSqlParser.SET, 0); }
		public TerminalNode IGNORE() { return getToken(NaiveSqlParser.IGNORE, 0); }
		public TerminalNode INTO() { return getToken(NaiveSqlParser.INTO, 0); }
		public List<UpdatedElementContext> updatedElement() {
			return getRuleContexts(UpdatedElementContext.class);
		}
		public UpdatedElementContext updatedElement(int i) {
			return getRuleContext(UpdatedElementContext.class,i);
		}
		public TerminalNode LOW_PRIORITY() { return getToken(NaiveSqlParser.LOW_PRIORITY, 0); }
		public TerminalNode DELAYED() { return getToken(NaiveSqlParser.DELAYED, 0); }
		public TerminalNode HIGH_PRIORITY() { return getToken(NaiveSqlParser.HIGH_PRIORITY, 0); }
		public UidListContext uidList() {
			return getRuleContext(UidListContext.class,0);
		}
		public InsertStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_insertStatement; }
	}

	public final InsertStatementContext insertStatement() throws RecognitionException {
		InsertStatementContext _localctx = new InsertStatementContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_insertStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(456);
			match(INSERT);
			setState(458);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 37)) & ~0x3f) == 0 && ((1L << (_la - 37)) & ((1L << (DELAYED - 37)) | (1L << (HIGH_PRIORITY - 37)) | (1L << (LOW_PRIORITY - 37)))) != 0)) {
				{
				setState(457);
				((InsertStatementContext)_localctx).priority = _input.LT(1);
				_la = _input.LA(1);
				if ( !(((((_la - 37)) & ~0x3f) == 0 && ((1L << (_la - 37)) & ((1L << (DELAYED - 37)) | (1L << (HIGH_PRIORITY - 37)) | (1L << (LOW_PRIORITY - 37)))) != 0)) ) {
					((InsertStatementContext)_localctx).priority = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(461);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==IGNORE) {
				{
				setState(460);
				match(IGNORE);
				}
			}

			setState(464);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==INTO) {
				{
				setState(463);
				match(INTO);
				}
			}

			setState(466);
			tableName();
			setState(483);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SELECT:
			case VALUES:
			case VALUE:
			case LR_BRACKET:
				{
				setState(471);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,65,_ctx) ) {
				case 1:
					{
					setState(467);
					match(LR_BRACKET);
					setState(468);
					((InsertStatementContext)_localctx).columns = uidList();
					setState(469);
					match(RR_BRACKET);
					}
					break;
				}
				setState(473);
				insertStatementValue();
				}
				break;
			case SET:
				{
				setState(474);
				match(SET);
				setState(475);
				((InsertStatementContext)_localctx).setFirst = updatedElement();
				setState(480);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(476);
					match(COMMA);
					setState(477);
					((InsertStatementContext)_localctx).updatedElement = updatedElement();
					((InsertStatementContext)_localctx).setElements.add(((InsertStatementContext)_localctx).updatedElement);
					}
					}
					setState(482);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InsertStatementValueContext extends ParserRuleContext {
		public Token insertFormat;
		public SelectStatementContext selectStatement() {
			return getRuleContext(SelectStatementContext.class,0);
		}
		public List<ExpressionsWithDefaultsContext> expressionsWithDefaults() {
			return getRuleContexts(ExpressionsWithDefaultsContext.class);
		}
		public ExpressionsWithDefaultsContext expressionsWithDefaults(int i) {
			return getRuleContext(ExpressionsWithDefaultsContext.class,i);
		}
		public TerminalNode VALUES() { return getToken(NaiveSqlParser.VALUES, 0); }
		public TerminalNode VALUE() { return getToken(NaiveSqlParser.VALUE, 0); }
		public InsertStatementValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_insertStatementValue; }
	}

	public final InsertStatementValueContext insertStatementValue() throws RecognitionException {
		InsertStatementValueContext _localctx = new InsertStatementValueContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_insertStatementValue);
		int _la;
		try {
			setState(500);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SELECT:
			case LR_BRACKET:
				enterOuterAlt(_localctx, 1);
				{
				setState(485);
				selectStatement();
				}
				break;
			case VALUES:
			case VALUE:
				enterOuterAlt(_localctx, 2);
				{
				setState(486);
				((InsertStatementValueContext)_localctx).insertFormat = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==VALUES || _la==VALUE) ) {
					((InsertStatementValueContext)_localctx).insertFormat = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(487);
				match(LR_BRACKET);
				setState(488);
				expressionsWithDefaults();
				setState(489);
				match(RR_BRACKET);
				setState(497);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(490);
					match(COMMA);
					setState(491);
					match(LR_BRACKET);
					setState(492);
					expressionsWithDefaults();
					setState(493);
					match(RR_BRACKET);
					}
					}
					setState(499);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentFieldContext extends ParserRuleContext {
		public UidContext uid() {
			return getRuleContext(UidContext.class,0);
		}
		public TerminalNode LOCAL_ID() { return getToken(NaiveSqlParser.LOCAL_ID, 0); }
		public AssignmentFieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentField; }
	}

	public final AssignmentFieldContext assignmentField() throws RecognitionException {
		AssignmentFieldContext _localctx = new AssignmentFieldContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_assignmentField);
		try {
			setState(504);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(502);
				uid();
				}
				break;
			case LOCAL_ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(503);
				match(LOCAL_ID);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UpdatedElementContext extends ParserRuleContext {
		public FullIdContext fullId() {
			return getRuleContext(FullIdContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode DEFAULT() { return getToken(NaiveSqlParser.DEFAULT, 0); }
		public UpdatedElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_updatedElement; }
	}

	public final UpdatedElementContext updatedElement() throws RecognitionException {
		UpdatedElementContext _localctx = new UpdatedElementContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_updatedElement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(506);
			fullId();
			setState(507);
			match(EQUAL_SYMBOL);
			setState(510);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EXISTS:
			case FALSE:
			case INTERVAL:
			case NOT:
			case NULL_LITERAL:
			case TRUE:
			case ROW:
			case BINARY:
			case PLUS:
			case MINUS:
			case EXCLAMATION_SYMBOL:
			case BIT_NOT_OP:
			case LR_BRACKET:
			case ZERO_DECIMAL:
			case ONE_DECIMAL:
			case TWO_DECIMAL:
			case STRING_LITERAL:
			case DECIMAL_LITERAL:
			case HEXADECIMAL_LITERAL:
			case REAL_LITERAL:
			case NULL_SPEC_LITERAL:
			case BIT_STRING:
			case ID:
			case LOCAL_ID:
				{
				setState(508);
				expression(0);
				}
				break;
			case DEFAULT:
				{
				setState(509);
				match(DEFAULT);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FromClauseContext extends ParserRuleContext {
		public ExpressionContext whereExpr;
		public ExpressionContext havingExpr;
		public TerminalNode FROM() { return getToken(NaiveSqlParser.FROM, 0); }
		public TableSourcesContext tableSources() {
			return getRuleContext(TableSourcesContext.class,0);
		}
		public TerminalNode WHERE() { return getToken(NaiveSqlParser.WHERE, 0); }
		public TerminalNode GROUP() { return getToken(NaiveSqlParser.GROUP, 0); }
		public TerminalNode BY() { return getToken(NaiveSqlParser.BY, 0); }
		public List<GroupByItemContext> groupByItem() {
			return getRuleContexts(GroupByItemContext.class);
		}
		public GroupByItemContext groupByItem(int i) {
			return getRuleContext(GroupByItemContext.class,i);
		}
		public TerminalNode HAVING() { return getToken(NaiveSqlParser.HAVING, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public FromClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fromClause; }
	}

	public final FromClauseContext fromClause() throws RecognitionException {
		FromClauseContext _localctx = new FromClauseContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_fromClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(512);
			match(FROM);
			setState(513);
			tableSources();
			setState(516);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(514);
				match(WHERE);
				setState(515);
				((FromClauseContext)_localctx).whereExpr = expression(0);
				}
			}

			setState(528);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==GROUP) {
				{
				setState(518);
				match(GROUP);
				setState(519);
				match(BY);
				setState(520);
				groupByItem();
				setState(525);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(521);
					match(COMMA);
					setState(522);
					groupByItem();
					}
					}
					setState(527);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(532);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==HAVING) {
				{
				setState(530);
				match(HAVING);
				setState(531);
				((FromClauseContext)_localctx).havingExpr = expression(0);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class GroupByItemContext extends ParserRuleContext {
		public Token order;
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode ASC() { return getToken(NaiveSqlParser.ASC, 0); }
		public TerminalNode DESC() { return getToken(NaiveSqlParser.DESC, 0); }
		public GroupByItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_groupByItem; }
	}

	public final GroupByItemContext groupByItem() throws RecognitionException {
		GroupByItemContext _localctx = new GroupByItemContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_groupByItem);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(534);
			expression(0);
			setState(536);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASC || _la==DESC) {
				{
				setState(535);
				((GroupByItemContext)_localctx).order = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==ASC || _la==DESC) ) {
					((GroupByItemContext)_localctx).order = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LimitClauseContext extends ParserRuleContext {
		public DecimalLiteralContext offset;
		public DecimalLiteralContext limit;
		public TerminalNode LIMIT() { return getToken(NaiveSqlParser.LIMIT, 0); }
		public TerminalNode OFFSET() { return getToken(NaiveSqlParser.OFFSET, 0); }
		public List<DecimalLiteralContext> decimalLiteral() {
			return getRuleContexts(DecimalLiteralContext.class);
		}
		public DecimalLiteralContext decimalLiteral(int i) {
			return getRuleContext(DecimalLiteralContext.class,i);
		}
		public LimitClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_limitClause; }
	}

	public final LimitClauseContext limitClause() throws RecognitionException {
		LimitClauseContext _localctx = new LimitClauseContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_limitClause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(538);
			match(LIMIT);
			setState(549);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
			case 1:
				{
				setState(542);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,77,_ctx) ) {
				case 1:
					{
					setState(539);
					((LimitClauseContext)_localctx).offset = decimalLiteral();
					setState(540);
					match(COMMA);
					}
					break;
				}
				setState(544);
				((LimitClauseContext)_localctx).limit = decimalLiteral();
				}
				break;
			case 2:
				{
				setState(545);
				((LimitClauseContext)_localctx).limit = decimalLiteral();
				setState(546);
				match(OFFSET);
				setState(547);
				((LimitClauseContext)_localctx).offset = decimalLiteral();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OrderByClauseContext extends ParserRuleContext {
		public TerminalNode ORDER() { return getToken(NaiveSqlParser.ORDER, 0); }
		public TerminalNode BY() { return getToken(NaiveSqlParser.BY, 0); }
		public List<OrderByExpressionContext> orderByExpression() {
			return getRuleContexts(OrderByExpressionContext.class);
		}
		public OrderByExpressionContext orderByExpression(int i) {
			return getRuleContext(OrderByExpressionContext.class,i);
		}
		public OrderByClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orderByClause; }
	}

	public final OrderByClauseContext orderByClause() throws RecognitionException {
		OrderByClauseContext _localctx = new OrderByClauseContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_orderByClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(551);
			match(ORDER);
			setState(552);
			match(BY);
			setState(553);
			orderByExpression();
			setState(558);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(554);
				match(COMMA);
				setState(555);
				orderByExpression();
				}
				}
				setState(560);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OrderByExpressionContext extends ParserRuleContext {
		public Token order;
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode ASC() { return getToken(NaiveSqlParser.ASC, 0); }
		public TerminalNode DESC() { return getToken(NaiveSqlParser.DESC, 0); }
		public OrderByExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orderByExpression; }
	}

	public final OrderByExpressionContext orderByExpression() throws RecognitionException {
		OrderByExpressionContext _localctx = new OrderByExpressionContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_orderByExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(561);
			expression(0);
			setState(563);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASC || _la==DESC) {
				{
				setState(562);
				((OrderByExpressionContext)_localctx).order = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==ASC || _la==DESC) ) {
					((OrderByExpressionContext)_localctx).order = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TableSourcesContext extends ParserRuleContext {
		public List<TableSourceContext> tableSource() {
			return getRuleContexts(TableSourceContext.class);
		}
		public TableSourceContext tableSource(int i) {
			return getRuleContext(TableSourceContext.class,i);
		}
		public TableSourcesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tableSources; }
	}

	public final TableSourcesContext tableSources() throws RecognitionException {
		TableSourcesContext _localctx = new TableSourcesContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_tableSources);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(565);
			tableSource();
			setState(570);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(566);
				match(COMMA);
				setState(567);
				tableSource();
				}
				}
				setState(572);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TableSourceContext extends ParserRuleContext {
		public TableSourceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tableSource; }
	 
		public TableSourceContext() { }
		public void copyFrom(TableSourceContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class TableSourceNestedContext extends TableSourceContext {
		public TableSourceItemContext tableSourceItem() {
			return getRuleContext(TableSourceItemContext.class,0);
		}
		public List<JoinPartContext> joinPart() {
			return getRuleContexts(JoinPartContext.class);
		}
		public JoinPartContext joinPart(int i) {
			return getRuleContext(JoinPartContext.class,i);
		}
		public TableSourceNestedContext(TableSourceContext ctx) { copyFrom(ctx); }
	}
	public static class TableSourceBaseContext extends TableSourceContext {
		public TableSourceItemContext tableSourceItem() {
			return getRuleContext(TableSourceItemContext.class,0);
		}
		public List<JoinPartContext> joinPart() {
			return getRuleContexts(JoinPartContext.class);
		}
		public JoinPartContext joinPart(int i) {
			return getRuleContext(JoinPartContext.class,i);
		}
		public TableSourceBaseContext(TableSourceContext ctx) { copyFrom(ctx); }
	}

	public final TableSourceContext tableSource() throws RecognitionException {
		TableSourceContext _localctx = new TableSourceContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_tableSource);
		int _la;
		try {
			setState(590);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				_localctx = new TableSourceBaseContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(573);
				tableSourceItem();
				setState(577);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (((((_la - 30)) & ~0x3f) == 0 && ((1L << (_la - 30)) & ((1L << (CROSS - 30)) | (1L << (INNER - 30)) | (1L << (JOIN - 30)) | (1L << (LEFT - 30)))) != 0) || ((((_la - 96)) & ~0x3f) == 0 && ((1L << (_la - 96)) & ((1L << (NATURAL - 96)) | (1L << (RIGHT - 96)) | (1L << (STRAIGHT_JOIN - 96)))) != 0)) {
					{
					{
					setState(574);
					joinPart();
					}
					}
					setState(579);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				_localctx = new TableSourceNestedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(580);
				match(LR_BRACKET);
				setState(581);
				tableSourceItem();
				setState(585);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (((((_la - 30)) & ~0x3f) == 0 && ((1L << (_la - 30)) & ((1L << (CROSS - 30)) | (1L << (INNER - 30)) | (1L << (JOIN - 30)) | (1L << (LEFT - 30)))) != 0) || ((((_la - 96)) & ~0x3f) == 0 && ((1L << (_la - 96)) & ((1L << (NATURAL - 96)) | (1L << (RIGHT - 96)) | (1L << (STRAIGHT_JOIN - 96)))) != 0)) {
					{
					{
					setState(582);
					joinPart();
					}
					}
					setState(587);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(588);
				match(RR_BRACKET);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TableSourceItemContext extends ParserRuleContext {
		public TableSourceItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tableSourceItem; }
	 
		public TableSourceItemContext() { }
		public void copyFrom(TableSourceItemContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class SubqueryTableItemContext extends TableSourceItemContext {
		public SelectStatementContext parenthesisSubquery;
		public UidContext alias;
		public UidContext uid() {
			return getRuleContext(UidContext.class,0);
		}
		public SelectStatementContext selectStatement() {
			return getRuleContext(SelectStatementContext.class,0);
		}
		public TerminalNode AS() { return getToken(NaiveSqlParser.AS, 0); }
		public SubqueryTableItemContext(TableSourceItemContext ctx) { copyFrom(ctx); }
	}
	public static class AtomTableItemContext extends TableSourceItemContext {
		public UidContext alias;
		public TableNameContext tableName() {
			return getRuleContext(TableNameContext.class,0);
		}
		public TerminalNode PARTITION() { return getToken(NaiveSqlParser.PARTITION, 0); }
		public UidListContext uidList() {
			return getRuleContext(UidListContext.class,0);
		}
		public List<IndexHintContext> indexHint() {
			return getRuleContexts(IndexHintContext.class);
		}
		public IndexHintContext indexHint(int i) {
			return getRuleContext(IndexHintContext.class,i);
		}
		public UidContext uid() {
			return getRuleContext(UidContext.class,0);
		}
		public TerminalNode AS() { return getToken(NaiveSqlParser.AS, 0); }
		public AtomTableItemContext(TableSourceItemContext ctx) { copyFrom(ctx); }
	}
	public static class TableSourcesItemContext extends TableSourceItemContext {
		public TableSourcesContext tableSources() {
			return getRuleContext(TableSourcesContext.class,0);
		}
		public TableSourcesItemContext(TableSourceItemContext ctx) { copyFrom(ctx); }
	}

	public final TableSourceItemContext tableSourceItem() throws RecognitionException {
		TableSourceItemContext _localctx = new TableSourceItemContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_tableSourceItem);
		int _la;
		try {
			int _alt;
			setState(632);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				_localctx = new AtomTableItemContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(592);
				tableName();
				setState(598);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==PARTITION) {
					{
					setState(593);
					match(PARTITION);
					setState(594);
					match(LR_BRACKET);
					setState(595);
					uidList();
					setState(596);
					match(RR_BRACKET);
					}
				}

				setState(604);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,87,_ctx) ) {
				case 1:
					{
					setState(601);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==AS) {
						{
						setState(600);
						match(AS);
						}
					}

					setState(603);
					((AtomTableItemContext)_localctx).alias = uid();
					}
					break;
				}
				setState(614);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==FORCE || _la==IGNORE || _la==USE) {
					{
					setState(606);
					indexHint();
					setState(611);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,88,_ctx);
					while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
						if ( _alt==1 ) {
							{
							{
							setState(607);
							match(COMMA);
							setState(608);
							indexHint();
							}
							} 
						}
						setState(613);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,88,_ctx);
					}
					}
				}

				}
				break;
			case 2:
				_localctx = new SubqueryTableItemContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(621);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,90,_ctx) ) {
				case 1:
					{
					setState(616);
					selectStatement();
					}
					break;
				case 2:
					{
					setState(617);
					match(LR_BRACKET);
					setState(618);
					((SubqueryTableItemContext)_localctx).parenthesisSubquery = selectStatement();
					setState(619);
					match(RR_BRACKET);
					}
					break;
				}
				setState(624);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AS) {
					{
					setState(623);
					match(AS);
					}
				}

				setState(626);
				((SubqueryTableItemContext)_localctx).alias = uid();
				}
				break;
			case 3:
				_localctx = new TableSourcesItemContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(628);
				match(LR_BRACKET);
				setState(629);
				tableSources();
				setState(630);
				match(RR_BRACKET);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IndexHintContext extends ParserRuleContext {
		public Token indexHintAction;
		public Token keyFormat;
		public UidListContext uidList() {
			return getRuleContext(UidListContext.class,0);
		}
		public TerminalNode USE() { return getToken(NaiveSqlParser.USE, 0); }
		public TerminalNode IGNORE() { return getToken(NaiveSqlParser.IGNORE, 0); }
		public TerminalNode FORCE() { return getToken(NaiveSqlParser.FORCE, 0); }
		public TerminalNode INDEX() { return getToken(NaiveSqlParser.INDEX, 0); }
		public TerminalNode KEY() { return getToken(NaiveSqlParser.KEY, 0); }
		public TerminalNode FOR() { return getToken(NaiveSqlParser.FOR, 0); }
		public IndexHintTypeContext indexHintType() {
			return getRuleContext(IndexHintTypeContext.class,0);
		}
		public IndexHintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_indexHint; }
	}

	public final IndexHintContext indexHint() throws RecognitionException {
		IndexHintContext _localctx = new IndexHintContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_indexHint);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(634);
			((IndexHintContext)_localctx).indexHintAction = _input.LT(1);
			_la = _input.LA(1);
			if ( !(_la==FORCE || _la==IGNORE || _la==USE) ) {
				((IndexHintContext)_localctx).indexHintAction = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(635);
			((IndexHintContext)_localctx).keyFormat = _input.LT(1);
			_la = _input.LA(1);
			if ( !(_la==INDEX || _la==KEY) ) {
				((IndexHintContext)_localctx).keyFormat = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(638);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==FOR) {
				{
				setState(636);
				match(FOR);
				setState(637);
				indexHintType();
				}
			}

			setState(640);
			match(LR_BRACKET);
			setState(641);
			uidList();
			setState(642);
			match(RR_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IndexHintTypeContext extends ParserRuleContext {
		public TerminalNode JOIN() { return getToken(NaiveSqlParser.JOIN, 0); }
		public TerminalNode ORDER() { return getToken(NaiveSqlParser.ORDER, 0); }
		public TerminalNode BY() { return getToken(NaiveSqlParser.BY, 0); }
		public TerminalNode GROUP() { return getToken(NaiveSqlParser.GROUP, 0); }
		public IndexHintTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_indexHintType; }
	}

	public final IndexHintTypeContext indexHintType() throws RecognitionException {
		IndexHintTypeContext _localctx = new IndexHintTypeContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_indexHintType);
		try {
			setState(649);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case JOIN:
				enterOuterAlt(_localctx, 1);
				{
				setState(644);
				match(JOIN);
				}
				break;
			case ORDER:
				enterOuterAlt(_localctx, 2);
				{
				setState(645);
				match(ORDER);
				setState(646);
				match(BY);
				}
				break;
			case GROUP:
				enterOuterAlt(_localctx, 3);
				{
				setState(647);
				match(GROUP);
				setState(648);
				match(BY);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class JoinPartContext extends ParserRuleContext {
		public JoinPartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_joinPart; }
	 
		public JoinPartContext() { }
		public void copyFrom(JoinPartContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class InnerJoinContext extends JoinPartContext {
		public TerminalNode JOIN() { return getToken(NaiveSqlParser.JOIN, 0); }
		public TableSourceItemContext tableSourceItem() {
			return getRuleContext(TableSourceItemContext.class,0);
		}
		public TerminalNode ON() { return getToken(NaiveSqlParser.ON, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode USING() { return getToken(NaiveSqlParser.USING, 0); }
		public UidListContext uidList() {
			return getRuleContext(UidListContext.class,0);
		}
		public TerminalNode INNER() { return getToken(NaiveSqlParser.INNER, 0); }
		public TerminalNode CROSS() { return getToken(NaiveSqlParser.CROSS, 0); }
		public InnerJoinContext(JoinPartContext ctx) { copyFrom(ctx); }
	}
	public static class NaturalJoinContext extends JoinPartContext {
		public TerminalNode NATURAL() { return getToken(NaiveSqlParser.NATURAL, 0); }
		public TerminalNode JOIN() { return getToken(NaiveSqlParser.JOIN, 0); }
		public TableSourceItemContext tableSourceItem() {
			return getRuleContext(TableSourceItemContext.class,0);
		}
		public TerminalNode LEFT() { return getToken(NaiveSqlParser.LEFT, 0); }
		public TerminalNode RIGHT() { return getToken(NaiveSqlParser.RIGHT, 0); }
		public TerminalNode OUTER() { return getToken(NaiveSqlParser.OUTER, 0); }
		public NaturalJoinContext(JoinPartContext ctx) { copyFrom(ctx); }
	}
	public static class OuterJoinContext extends JoinPartContext {
		public TerminalNode JOIN() { return getToken(NaiveSqlParser.JOIN, 0); }
		public TableSourceItemContext tableSourceItem() {
			return getRuleContext(TableSourceItemContext.class,0);
		}
		public TerminalNode LEFT() { return getToken(NaiveSqlParser.LEFT, 0); }
		public TerminalNode RIGHT() { return getToken(NaiveSqlParser.RIGHT, 0); }
		public TerminalNode ON() { return getToken(NaiveSqlParser.ON, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode USING() { return getToken(NaiveSqlParser.USING, 0); }
		public UidListContext uidList() {
			return getRuleContext(UidListContext.class,0);
		}
		public TerminalNode OUTER() { return getToken(NaiveSqlParser.OUTER, 0); }
		public OuterJoinContext(JoinPartContext ctx) { copyFrom(ctx); }
	}
	public static class StraightJoinContext extends JoinPartContext {
		public TerminalNode STRAIGHT_JOIN() { return getToken(NaiveSqlParser.STRAIGHT_JOIN, 0); }
		public TableSourceItemContext tableSourceItem() {
			return getRuleContext(TableSourceItemContext.class,0);
		}
		public TerminalNode ON() { return getToken(NaiveSqlParser.ON, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public StraightJoinContext(JoinPartContext ctx) { copyFrom(ctx); }
	}

	public final JoinPartContext joinPart() throws RecognitionException {
		JoinPartContext _localctx = new JoinPartContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_joinPart);
		int _la;
		try {
			setState(695);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CROSS:
			case INNER:
			case JOIN:
				_localctx = new InnerJoinContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(652);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==CROSS || _la==INNER) {
					{
					setState(651);
					_la = _input.LA(1);
					if ( !(_la==CROSS || _la==INNER) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
				}

				setState(654);
				match(JOIN);
				setState(655);
				tableSourceItem();
				setState(663);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case ON:
					{
					setState(656);
					match(ON);
					setState(657);
					expression(0);
					}
					break;
				case USING:
					{
					setState(658);
					match(USING);
					setState(659);
					match(LR_BRACKET);
					setState(660);
					uidList();
					setState(661);
					match(RR_BRACKET);
					}
					break;
				case EOF:
				case AS:
				case CROSS:
				case GROUP:
				case HAVING:
				case INNER:
				case INTO:
				case JOIN:
				case LEFT:
				case LIMIT:
				case NATURAL:
				case ORDER:
				case RIGHT:
				case STRAIGHT_JOIN:
				case UNION:
				case WHERE:
				case MINUSMINUS:
				case RR_BRACKET:
				case COMMA:
				case SEMI:
				case ID:
					break;
				default:
					break;
				}
				}
				break;
			case STRAIGHT_JOIN:
				_localctx = new StraightJoinContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(665);
				match(STRAIGHT_JOIN);
				setState(666);
				tableSourceItem();
				setState(669);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ON) {
					{
					setState(667);
					match(ON);
					setState(668);
					expression(0);
					}
				}

				}
				break;
			case LEFT:
			case RIGHT:
				_localctx = new OuterJoinContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(671);
				_la = _input.LA(1);
				if ( !(_la==LEFT || _la==RIGHT) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(673);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OUTER) {
					{
					setState(672);
					match(OUTER);
					}
				}

				setState(675);
				match(JOIN);
				setState(676);
				tableSourceItem();
				setState(684);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case ON:
					{
					setState(677);
					match(ON);
					setState(678);
					expression(0);
					}
					break;
				case USING:
					{
					setState(679);
					match(USING);
					setState(680);
					match(LR_BRACKET);
					setState(681);
					uidList();
					setState(682);
					match(RR_BRACKET);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case NATURAL:
				_localctx = new NaturalJoinContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(686);
				match(NATURAL);
				setState(691);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LEFT || _la==RIGHT) {
					{
					setState(687);
					_la = _input.LA(1);
					if ( !(_la==LEFT || _la==RIGHT) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(689);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==OUTER) {
						{
						setState(688);
						match(OUTER);
						}
					}

					}
				}

				setState(693);
				match(JOIN);
				setState(694);
				tableSourceItem();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	 
		public ExpressionContext() { }
		public void copyFrom(ExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class IsExpressionContext extends ExpressionContext {
		public Token testValue;
		public PredicateContext predicate() {
			return getRuleContext(PredicateContext.class,0);
		}
		public TerminalNode IS() { return getToken(NaiveSqlParser.IS, 0); }
		public TerminalNode TRUE() { return getToken(NaiveSqlParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(NaiveSqlParser.FALSE, 0); }
		public TerminalNode UNKNOWN() { return getToken(NaiveSqlParser.UNKNOWN, 0); }
		public TerminalNode NOT() { return getToken(NaiveSqlParser.NOT, 0); }
		public IsExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class NotExpressionContext extends ExpressionContext {
		public Token notOperator;
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode NOT() { return getToken(NaiveSqlParser.NOT, 0); }
		public NotExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class LogicalExpressionContext extends ExpressionContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public LogicalOperatorContext logicalOperator() {
			return getRuleContext(LogicalOperatorContext.class,0);
		}
		public LogicalExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class PredicateExpressionContext extends ExpressionContext {
		public PredicateContext predicate() {
			return getRuleContext(PredicateContext.class,0);
		}
		public PredicateExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 80;
		enterRecursionRule(_localctx, 80, RULE_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(708);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,104,_ctx) ) {
			case 1:
				{
				_localctx = new NotExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(698);
				((NotExpressionContext)_localctx).notOperator = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==NOT || _la==EXCLAMATION_SYMBOL) ) {
					((NotExpressionContext)_localctx).notOperator = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(699);
				expression(4);
				}
				break;
			case 2:
				{
				_localctx = new IsExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(700);
				predicate(0);
				setState(701);
				match(IS);
				setState(703);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(702);
					match(NOT);
					}
				}

				setState(705);
				((IsExpressionContext)_localctx).testValue = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==FALSE || _la==TRUE || _la==UNKNOWN) ) {
					((IsExpressionContext)_localctx).testValue = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 3:
				{
				_localctx = new PredicateExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(707);
				predicate(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(716);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,105,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalExpressionContext(new ExpressionContext(_parentctx, _parentState));
					pushNewRecursionContext(_localctx, _startState, RULE_expression);
					setState(710);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(711);
					logicalOperator();
					setState(712);
					expression(4);
					}
					} 
				}
				setState(718);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,105,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class PredicateContext extends ParserRuleContext {
		public PredicateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_predicate; }
	 
		public PredicateContext() { }
		public void copyFrom(PredicateContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class SoundsLikePredicateContext extends PredicateContext {
		public List<PredicateContext> predicate() {
			return getRuleContexts(PredicateContext.class);
		}
		public PredicateContext predicate(int i) {
			return getRuleContext(PredicateContext.class,i);
		}
		public TerminalNode SOUNDS() { return getToken(NaiveSqlParser.SOUNDS, 0); }
		public TerminalNode LIKE() { return getToken(NaiveSqlParser.LIKE, 0); }
		public SoundsLikePredicateContext(PredicateContext ctx) { copyFrom(ctx); }
	}
	public static class ExpressionAtomPredicateContext extends PredicateContext {
		public ExpressionAtomContext expressionAtom() {
			return getRuleContext(ExpressionAtomContext.class,0);
		}
		public TerminalNode LOCAL_ID() { return getToken(NaiveSqlParser.LOCAL_ID, 0); }
		public TerminalNode VAR_ASSIGN() { return getToken(NaiveSqlParser.VAR_ASSIGN, 0); }
		public ExpressionAtomPredicateContext(PredicateContext ctx) { copyFrom(ctx); }
	}
	public static class InPredicateContext extends PredicateContext {
		public PredicateContext predicate() {
			return getRuleContext(PredicateContext.class,0);
		}
		public TerminalNode IN() { return getToken(NaiveSqlParser.IN, 0); }
		public SelectStatementContext selectStatement() {
			return getRuleContext(SelectStatementContext.class,0);
		}
		public ExpressionsContext expressions() {
			return getRuleContext(ExpressionsContext.class,0);
		}
		public TerminalNode NOT() { return getToken(NaiveSqlParser.NOT, 0); }
		public InPredicateContext(PredicateContext ctx) { copyFrom(ctx); }
	}
	public static class SubqueryComparasionPredicateContext extends PredicateContext {
		public Token quantifier;
		public PredicateContext predicate() {
			return getRuleContext(PredicateContext.class,0);
		}
		public ComparisonOperatorContext comparisonOperator() {
			return getRuleContext(ComparisonOperatorContext.class,0);
		}
		public SelectStatementContext selectStatement() {
			return getRuleContext(SelectStatementContext.class,0);
		}
		public TerminalNode ALL() { return getToken(NaiveSqlParser.ALL, 0); }
		public TerminalNode ANY() { return getToken(NaiveSqlParser.ANY, 0); }
		public TerminalNode SOME() { return getToken(NaiveSqlParser.SOME, 0); }
		public SubqueryComparasionPredicateContext(PredicateContext ctx) { copyFrom(ctx); }
	}
	public static class BetweenPredicateContext extends PredicateContext {
		public List<PredicateContext> predicate() {
			return getRuleContexts(PredicateContext.class);
		}
		public PredicateContext predicate(int i) {
			return getRuleContext(PredicateContext.class,i);
		}
		public TerminalNode BETWEEN() { return getToken(NaiveSqlParser.BETWEEN, 0); }
		public TerminalNode AND() { return getToken(NaiveSqlParser.AND, 0); }
		public TerminalNode NOT() { return getToken(NaiveSqlParser.NOT, 0); }
		public BetweenPredicateContext(PredicateContext ctx) { copyFrom(ctx); }
	}
	public static class BinaryComparasionPredicateContext extends PredicateContext {
		public PredicateContext left;
		public PredicateContext right;
		public ComparisonOperatorContext comparisonOperator() {
			return getRuleContext(ComparisonOperatorContext.class,0);
		}
		public List<PredicateContext> predicate() {
			return getRuleContexts(PredicateContext.class);
		}
		public PredicateContext predicate(int i) {
			return getRuleContext(PredicateContext.class,i);
		}
		public BinaryComparasionPredicateContext(PredicateContext ctx) { copyFrom(ctx); }
	}
	public static class IsNullPredicateContext extends PredicateContext {
		public PredicateContext predicate() {
			return getRuleContext(PredicateContext.class,0);
		}
		public TerminalNode IS() { return getToken(NaiveSqlParser.IS, 0); }
		public NullNotnullContext nullNotnull() {
			return getRuleContext(NullNotnullContext.class,0);
		}
		public IsNullPredicateContext(PredicateContext ctx) { copyFrom(ctx); }
	}
	public static class LikePredicateContext extends PredicateContext {
		public List<PredicateContext> predicate() {
			return getRuleContexts(PredicateContext.class);
		}
		public PredicateContext predicate(int i) {
			return getRuleContext(PredicateContext.class,i);
		}
		public TerminalNode LIKE() { return getToken(NaiveSqlParser.LIKE, 0); }
		public TerminalNode NOT() { return getToken(NaiveSqlParser.NOT, 0); }
		public TerminalNode ESCAPE() { return getToken(NaiveSqlParser.ESCAPE, 0); }
		public TerminalNode STRING_LITERAL() { return getToken(NaiveSqlParser.STRING_LITERAL, 0); }
		public LikePredicateContext(PredicateContext ctx) { copyFrom(ctx); }
	}
	public static class RegexpPredicateContext extends PredicateContext {
		public Token regex;
		public List<PredicateContext> predicate() {
			return getRuleContexts(PredicateContext.class);
		}
		public PredicateContext predicate(int i) {
			return getRuleContext(PredicateContext.class,i);
		}
		public TerminalNode REGEXP() { return getToken(NaiveSqlParser.REGEXP, 0); }
		public TerminalNode RLIKE() { return getToken(NaiveSqlParser.RLIKE, 0); }
		public TerminalNode NOT() { return getToken(NaiveSqlParser.NOT, 0); }
		public RegexpPredicateContext(PredicateContext ctx) { copyFrom(ctx); }
	}

	public final PredicateContext predicate() throws RecognitionException {
		return predicate(0);
	}

	private PredicateContext predicate(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		PredicateContext _localctx = new PredicateContext(_ctx, _parentState);
		PredicateContext _prevctx = _localctx;
		int _startState = 82;
		enterRecursionRule(_localctx, 82, RULE_predicate, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			_localctx = new ExpressionAtomPredicateContext(_localctx);
			_ctx = _localctx;
			_prevctx = _localctx;

			setState(722);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL_ID) {
				{
				setState(720);
				match(LOCAL_ID);
				setState(721);
				match(VAR_ASSIGN);
				}
			}

			setState(724);
			expressionAtom(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(783);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,114,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(781);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,113,_ctx) ) {
					case 1:
						{
						_localctx = new BinaryComparasionPredicateContext(new PredicateContext(_parentctx, _parentState));
						((BinaryComparasionPredicateContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_predicate);
						setState(726);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(727);
						comparisonOperator();
						setState(728);
						((BinaryComparasionPredicateContext)_localctx).right = predicate(8);
						}
						break;
					case 2:
						{
						_localctx = new BetweenPredicateContext(new PredicateContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_predicate);
						setState(730);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(732);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==NOT) {
							{
							setState(731);
							match(NOT);
							}
						}

						setState(734);
						match(BETWEEN);
						setState(735);
						predicate(0);
						setState(736);
						match(AND);
						setState(737);
						predicate(6);
						}
						break;
					case 3:
						{
						_localctx = new SoundsLikePredicateContext(new PredicateContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_predicate);
						setState(739);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(740);
						match(SOUNDS);
						setState(741);
						match(LIKE);
						setState(742);
						predicate(5);
						}
						break;
					case 4:
						{
						_localctx = new RegexpPredicateContext(new PredicateContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_predicate);
						setState(743);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(745);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==NOT) {
							{
							setState(744);
							match(NOT);
							}
						}

						setState(747);
						((RegexpPredicateContext)_localctx).regex = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==REGEXP || _la==RLIKE) ) {
							((RegexpPredicateContext)_localctx).regex = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(748);
						predicate(3);
						}
						break;
					case 5:
						{
						_localctx = new InPredicateContext(new PredicateContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_predicate);
						setState(749);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(751);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==NOT) {
							{
							setState(750);
							match(NOT);
							}
						}

						setState(753);
						match(IN);
						setState(754);
						match(LR_BRACKET);
						setState(757);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,110,_ctx) ) {
						case 1:
							{
							setState(755);
							selectStatement();
							}
							break;
						case 2:
							{
							setState(756);
							expressions();
							}
							break;
						}
						setState(759);
						match(RR_BRACKET);
						}
						break;
					case 6:
						{
						_localctx = new IsNullPredicateContext(new PredicateContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_predicate);
						setState(761);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(762);
						match(IS);
						setState(763);
						nullNotnull();
						}
						break;
					case 7:
						{
						_localctx = new SubqueryComparasionPredicateContext(new PredicateContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_predicate);
						setState(764);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(765);
						comparisonOperator();
						setState(766);
						((SubqueryComparasionPredicateContext)_localctx).quantifier = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==ALL || _la==ANY || _la==SOME) ) {
							((SubqueryComparasionPredicateContext)_localctx).quantifier = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(767);
						match(LR_BRACKET);
						setState(768);
						selectStatement();
						setState(769);
						match(RR_BRACKET);
						}
						break;
					case 8:
						{
						_localctx = new LikePredicateContext(new PredicateContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_predicate);
						setState(771);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(773);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==NOT) {
							{
							setState(772);
							match(NOT);
							}
						}

						setState(775);
						match(LIKE);
						setState(776);
						predicate(0);
						setState(779);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,112,_ctx) ) {
						case 1:
							{
							setState(777);
							match(ESCAPE);
							setState(778);
							match(STRING_LITERAL);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(785);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,114,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ExpressionAtomContext extends ParserRuleContext {
		public ExpressionAtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionAtom; }
	 
		public ExpressionAtomContext() { }
		public void copyFrom(ExpressionAtomContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class UnaryExpressionAtomContext extends ExpressionAtomContext {
		public UnaryOperatorContext unaryOperator() {
			return getRuleContext(UnaryOperatorContext.class,0);
		}
		public ExpressionAtomContext expressionAtom() {
			return getRuleContext(ExpressionAtomContext.class,0);
		}
		public UnaryExpressionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class CollateExpressionAtomContext extends ExpressionAtomContext {
		public ExpressionAtomContext expressionAtom() {
			return getRuleContext(ExpressionAtomContext.class,0);
		}
		public TerminalNode COLLATE() { return getToken(NaiveSqlParser.COLLATE, 0); }
		public CollationNameContext collationName() {
			return getRuleContext(CollationNameContext.class,0);
		}
		public CollateExpressionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class SubqueryExpessionAtomContext extends ExpressionAtomContext {
		public SelectStatementContext selectStatement() {
			return getRuleContext(SelectStatementContext.class,0);
		}
		public SubqueryExpessionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class ExistsExpessionAtomContext extends ExpressionAtomContext {
		public TerminalNode EXISTS() { return getToken(NaiveSqlParser.EXISTS, 0); }
		public SelectStatementContext selectStatement() {
			return getRuleContext(SelectStatementContext.class,0);
		}
		public ExistsExpessionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class ConstantExpressionAtomContext extends ExpressionAtomContext {
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public ConstantExpressionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class BinaryExpressionAtomContext extends ExpressionAtomContext {
		public TerminalNode BINARY() { return getToken(NaiveSqlParser.BINARY, 0); }
		public ExpressionAtomContext expressionAtom() {
			return getRuleContext(ExpressionAtomContext.class,0);
		}
		public BinaryExpressionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class FullColumnNameExpressionAtomContext extends ExpressionAtomContext {
		public FullIdContext fullId() {
			return getRuleContext(FullIdContext.class,0);
		}
		public FullColumnNameExpressionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class BitExpressionAtomContext extends ExpressionAtomContext {
		public ExpressionAtomContext left;
		public ExpressionAtomContext right;
		public BitOperatorContext bitOperator() {
			return getRuleContext(BitOperatorContext.class,0);
		}
		public List<ExpressionAtomContext> expressionAtom() {
			return getRuleContexts(ExpressionAtomContext.class);
		}
		public ExpressionAtomContext expressionAtom(int i) {
			return getRuleContext(ExpressionAtomContext.class,i);
		}
		public BitExpressionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class NestedExpressionAtomContext extends ExpressionAtomContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public NestedExpressionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class NestedRowExpressionAtomContext extends ExpressionAtomContext {
		public TerminalNode ROW() { return getToken(NaiveSqlParser.ROW, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public NestedRowExpressionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class MathExpressionAtomContext extends ExpressionAtomContext {
		public ExpressionAtomContext left;
		public ExpressionAtomContext right;
		public MathOperatorContext mathOperator() {
			return getRuleContext(MathOperatorContext.class,0);
		}
		public List<ExpressionAtomContext> expressionAtom() {
			return getRuleContexts(ExpressionAtomContext.class);
		}
		public ExpressionAtomContext expressionAtom(int i) {
			return getRuleContext(ExpressionAtomContext.class,i);
		}
		public MathExpressionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}
	public static class IntervalExpressionAtomContext extends ExpressionAtomContext {
		public TerminalNode INTERVAL() { return getToken(NaiveSqlParser.INTERVAL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public IntervalTypeContext intervalType() {
			return getRuleContext(IntervalTypeContext.class,0);
		}
		public IntervalExpressionAtomContext(ExpressionAtomContext ctx) { copyFrom(ctx); }
	}

	public final ExpressionAtomContext expressionAtom() throws RecognitionException {
		return expressionAtom(0);
	}

	private ExpressionAtomContext expressionAtom(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionAtomContext _localctx = new ExpressionAtomContext(_ctx, _parentState);
		ExpressionAtomContext _prevctx = _localctx;
		int _startState = 84;
		enterRecursionRule(_localctx, 84, RULE_expressionAtom, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(829);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,117,_ctx) ) {
			case 1:
				{
				_localctx = new ConstantExpressionAtomContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(787);
				constant();
				}
				break;
			case 2:
				{
				_localctx = new FullColumnNameExpressionAtomContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(788);
				fullId();
				}
				break;
			case 3:
				{
				_localctx = new UnaryExpressionAtomContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(789);
				unaryOperator();
				setState(790);
				expressionAtom(9);
				}
				break;
			case 4:
				{
				_localctx = new BinaryExpressionAtomContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(792);
				match(BINARY);
				setState(793);
				expressionAtom(8);
				}
				break;
			case 5:
				{
				_localctx = new NestedExpressionAtomContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(794);
				match(LR_BRACKET);
				setState(795);
				expression(0);
				setState(800);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(796);
					match(COMMA);
					setState(797);
					expression(0);
					}
					}
					setState(802);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(803);
				match(RR_BRACKET);
				}
				break;
			case 6:
				{
				_localctx = new NestedRowExpressionAtomContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(805);
				match(ROW);
				setState(806);
				match(LR_BRACKET);
				setState(807);
				expression(0);
				setState(810); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(808);
					match(COMMA);
					setState(809);
					expression(0);
					}
					}
					setState(812); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==COMMA );
				setState(814);
				match(RR_BRACKET);
				}
				break;
			case 7:
				{
				_localctx = new ExistsExpessionAtomContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(816);
				match(EXISTS);
				setState(817);
				match(LR_BRACKET);
				setState(818);
				selectStatement();
				setState(819);
				match(RR_BRACKET);
				}
				break;
			case 8:
				{
				_localctx = new SubqueryExpessionAtomContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(821);
				match(LR_BRACKET);
				setState(822);
				selectStatement();
				setState(823);
				match(RR_BRACKET);
				}
				break;
			case 9:
				{
				_localctx = new IntervalExpressionAtomContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(825);
				match(INTERVAL);
				setState(826);
				expression(0);
				setState(827);
				intervalType();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(844);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,119,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(842);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,118,_ctx) ) {
					case 1:
						{
						_localctx = new BitExpressionAtomContext(new ExpressionAtomContext(_parentctx, _parentState));
						((BitExpressionAtomContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expressionAtom);
						setState(831);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(832);
						bitOperator();
						setState(833);
						((BitExpressionAtomContext)_localctx).right = expressionAtom(3);
						}
						break;
					case 2:
						{
						_localctx = new MathExpressionAtomContext(new ExpressionAtomContext(_parentctx, _parentState));
						((MathExpressionAtomContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expressionAtom);
						setState(835);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(836);
						mathOperator();
						setState(837);
						((MathExpressionAtomContext)_localctx).right = expressionAtom(2);
						}
						break;
					case 3:
						{
						_localctx = new CollateExpressionAtomContext(new ExpressionAtomContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expressionAtom);
						setState(839);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(840);
						match(COLLATE);
						setState(841);
						collationName();
						}
						break;
					}
					} 
				}
				setState(846);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,119,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class UnaryOperatorContext extends ParserRuleContext {
		public TerminalNode NOT() { return getToken(NaiveSqlParser.NOT, 0); }
		public UnaryOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryOperator; }
	}

	public final UnaryOperatorContext unaryOperator() throws RecognitionException {
		UnaryOperatorContext _localctx = new UnaryOperatorContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_unaryOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(847);
			_la = _input.LA(1);
			if ( !(_la==NOT || ((((_la - 565)) & ~0x3f) == 0 && ((1L << (_la - 565)) & ((1L << (PLUS - 565)) | (1L << (MINUS - 565)) | (1L << (EXCLAMATION_SYMBOL - 565)) | (1L << (BIT_NOT_OP - 565)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ComparisonOperatorContext extends ParserRuleContext {
		public ComparisonOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparisonOperator; }
	}

	public final ComparisonOperatorContext comparisonOperator() throws RecognitionException {
		ComparisonOperatorContext _localctx = new ComparisonOperatorContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_comparisonOperator);
		try {
			setState(863);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(849);
				match(EQUAL_SYMBOL);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(850);
				match(GREATER_SYMBOL);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(851);
				match(LESS_SYMBOL);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(852);
				match(LESS_SYMBOL);
				setState(853);
				match(EQUAL_SYMBOL);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(854);
				match(GREATER_SYMBOL);
				setState(855);
				match(EQUAL_SYMBOL);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(856);
				match(LESS_SYMBOL);
				setState(857);
				match(GREATER_SYMBOL);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(858);
				match(EXCLAMATION_SYMBOL);
				setState(859);
				match(EQUAL_SYMBOL);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(860);
				match(LESS_SYMBOL);
				setState(861);
				match(EQUAL_SYMBOL);
				setState(862);
				match(GREATER_SYMBOL);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LogicalOperatorContext extends ParserRuleContext {
		public TerminalNode AND() { return getToken(NaiveSqlParser.AND, 0); }
		public TerminalNode XOR() { return getToken(NaiveSqlParser.XOR, 0); }
		public TerminalNode OR() { return getToken(NaiveSqlParser.OR, 0); }
		public LogicalOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicalOperator; }
	}

	public final LogicalOperatorContext logicalOperator() throws RecognitionException {
		LogicalOperatorContext _localctx = new LogicalOperatorContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_logicalOperator);
		try {
			setState(872);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AND:
				enterOuterAlt(_localctx, 1);
				{
				setState(865);
				match(AND);
				}
				break;
			case BIT_AND_OP:
				enterOuterAlt(_localctx, 2);
				{
				setState(866);
				match(BIT_AND_OP);
				setState(867);
				match(BIT_AND_OP);
				}
				break;
			case XOR:
				enterOuterAlt(_localctx, 3);
				{
				setState(868);
				match(XOR);
				}
				break;
			case OR:
				enterOuterAlt(_localctx, 4);
				{
				setState(869);
				match(OR);
				}
				break;
			case BIT_OR_OP:
				enterOuterAlt(_localctx, 5);
				{
				setState(870);
				match(BIT_OR_OP);
				setState(871);
				match(BIT_OR_OP);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BitOperatorContext extends ParserRuleContext {
		public BitOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bitOperator; }
	}

	public final BitOperatorContext bitOperator() throws RecognitionException {
		BitOperatorContext _localctx = new BitOperatorContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_bitOperator);
		try {
			setState(881);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LESS_SYMBOL:
				enterOuterAlt(_localctx, 1);
				{
				setState(874);
				match(LESS_SYMBOL);
				setState(875);
				match(LESS_SYMBOL);
				}
				break;
			case GREATER_SYMBOL:
				enterOuterAlt(_localctx, 2);
				{
				setState(876);
				match(GREATER_SYMBOL);
				setState(877);
				match(GREATER_SYMBOL);
				}
				break;
			case BIT_AND_OP:
				enterOuterAlt(_localctx, 3);
				{
				setState(878);
				match(BIT_AND_OP);
				}
				break;
			case BIT_XOR_OP:
				enterOuterAlt(_localctx, 4);
				{
				setState(879);
				match(BIT_XOR_OP);
				}
				break;
			case BIT_OR_OP:
				enterOuterAlt(_localctx, 5);
				{
				setState(880);
				match(BIT_OR_OP);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MathOperatorContext extends ParserRuleContext {
		public TerminalNode DIV() { return getToken(NaiveSqlParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(NaiveSqlParser.MOD, 0); }
		public MathOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mathOperator; }
	}

	public final MathOperatorContext mathOperator() throws RecognitionException {
		MathOperatorContext _localctx = new MathOperatorContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_mathOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(883);
			_la = _input.LA(1);
			if ( !(((((_la - 562)) & ~0x3f) == 0 && ((1L << (_la - 562)) & ((1L << (STAR - 562)) | (1L << (DIVIDE - 562)) | (1L << (MODULE - 562)) | (1L << (PLUS - 562)) | (1L << (MINUSMINUS - 562)) | (1L << (MINUS - 562)) | (1L << (DIV - 562)) | (1L << (MOD - 562)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CollationNameContext extends ParserRuleContext {
		public UidContext uid() {
			return getRuleContext(UidContext.class,0);
		}
		public TerminalNode STRING_LITERAL() { return getToken(NaiveSqlParser.STRING_LITERAL, 0); }
		public CollationNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_collationName; }
	}

	public final CollationNameContext collationName() throws RecognitionException {
		CollationNameContext _localctx = new CollationNameContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_collationName);
		try {
			setState(887);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(885);
				uid();
				}
				break;
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(886);
				match(STRING_LITERAL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DecimalLiteralContext extends ParserRuleContext {
		public TerminalNode DECIMAL_LITERAL() { return getToken(NaiveSqlParser.DECIMAL_LITERAL, 0); }
		public TerminalNode ZERO_DECIMAL() { return getToken(NaiveSqlParser.ZERO_DECIMAL, 0); }
		public TerminalNode ONE_DECIMAL() { return getToken(NaiveSqlParser.ONE_DECIMAL, 0); }
		public TerminalNode TWO_DECIMAL() { return getToken(NaiveSqlParser.TWO_DECIMAL, 0); }
		public DecimalLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decimalLiteral; }
	}

	public final DecimalLiteralContext decimalLiteral() throws RecognitionException {
		DecimalLiteralContext _localctx = new DecimalLiteralContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_decimalLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(889);
			_la = _input.LA(1);
			if ( !(((((_la - 584)) & ~0x3f) == 0 && ((1L << (_la - 584)) & ((1L << (ZERO_DECIMAL - 584)) | (1L << (ONE_DECIMAL - 584)) | (1L << (TWO_DECIMAL - 584)) | (1L << (DECIMAL_LITERAL - 584)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StringLiteralContext extends ParserRuleContext {
		public List<TerminalNode> STRING_LITERAL() { return getTokens(NaiveSqlParser.STRING_LITERAL); }
		public TerminalNode STRING_LITERAL(int i) {
			return getToken(NaiveSqlParser.STRING_LITERAL, i);
		}
		public StringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringLiteral; }
	}

	public final StringLiteralContext stringLiteral() throws RecognitionException {
		StringLiteralContext _localctx = new StringLiteralContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_stringLiteral);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(891);
			match(STRING_LITERAL);
			}
			setState(893); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(892);
					match(STRING_LITERAL);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(895); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,124,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BooleanLiteralContext extends ParserRuleContext {
		public TerminalNode TRUE() { return getToken(NaiveSqlParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(NaiveSqlParser.FALSE, 0); }
		public BooleanLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanLiteral; }
	}

	public final BooleanLiteralContext booleanLiteral() throws RecognitionException {
		BooleanLiteralContext _localctx = new BooleanLiteralContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_booleanLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(897);
			_la = _input.LA(1);
			if ( !(_la==FALSE || _la==TRUE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class HexadecimalLiteralContext extends ParserRuleContext {
		public TerminalNode HEXADECIMAL_LITERAL() { return getToken(NaiveSqlParser.HEXADECIMAL_LITERAL, 0); }
		public HexadecimalLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_hexadecimalLiteral; }
	}

	public final HexadecimalLiteralContext hexadecimalLiteral() throws RecognitionException {
		HexadecimalLiteralContext _localctx = new HexadecimalLiteralContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_hexadecimalLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(899);
			match(HEXADECIMAL_LITERAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NullNotnullContext extends ParserRuleContext {
		public TerminalNode NULL_LITERAL() { return getToken(NaiveSqlParser.NULL_LITERAL, 0); }
		public TerminalNode NULL_SPEC_LITERAL() { return getToken(NaiveSqlParser.NULL_SPEC_LITERAL, 0); }
		public TerminalNode NOT() { return getToken(NaiveSqlParser.NOT, 0); }
		public NullNotnullContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nullNotnull; }
	}

	public final NullNotnullContext nullNotnull() throws RecognitionException {
		NullNotnullContext _localctx = new NullNotnullContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_nullNotnull);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(902);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NOT) {
				{
				setState(901);
				match(NOT);
				}
			}

			setState(904);
			_la = _input.LA(1);
			if ( !(_la==NULL_LITERAL || _la==NULL_SPEC_LITERAL) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantContext extends ParserRuleContext {
		public Token nullLiteral;
		public StringLiteralContext stringLiteral() {
			return getRuleContext(StringLiteralContext.class,0);
		}
		public DecimalLiteralContext decimalLiteral() {
			return getRuleContext(DecimalLiteralContext.class,0);
		}
		public HexadecimalLiteralContext hexadecimalLiteral() {
			return getRuleContext(HexadecimalLiteralContext.class,0);
		}
		public BooleanLiteralContext booleanLiteral() {
			return getRuleContext(BooleanLiteralContext.class,0);
		}
		public TerminalNode REAL_LITERAL() { return getToken(NaiveSqlParser.REAL_LITERAL, 0); }
		public TerminalNode BIT_STRING() { return getToken(NaiveSqlParser.BIT_STRING, 0); }
		public TerminalNode NULL_LITERAL() { return getToken(NaiveSqlParser.NULL_LITERAL, 0); }
		public TerminalNode NULL_SPEC_LITERAL() { return getToken(NaiveSqlParser.NULL_SPEC_LITERAL, 0); }
		public TerminalNode NOT() { return getToken(NaiveSqlParser.NOT, 0); }
		public ConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constant; }
	}

	public final ConstantContext constant() throws RecognitionException {
		ConstantContext _localctx = new ConstantContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_constant);
		int _la;
		try {
			setState(918);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(906);
				stringLiteral();
				}
				break;
			case ZERO_DECIMAL:
			case ONE_DECIMAL:
			case TWO_DECIMAL:
			case DECIMAL_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(907);
				decimalLiteral();
				}
				break;
			case MINUS:
				enterOuterAlt(_localctx, 3);
				{
				setState(908);
				match(MINUS);
				setState(909);
				decimalLiteral();
				}
				break;
			case HEXADECIMAL_LITERAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(910);
				hexadecimalLiteral();
				}
				break;
			case FALSE:
			case TRUE:
				enterOuterAlt(_localctx, 5);
				{
				setState(911);
				booleanLiteral();
				}
				break;
			case REAL_LITERAL:
				enterOuterAlt(_localctx, 6);
				{
				setState(912);
				match(REAL_LITERAL);
				}
				break;
			case BIT_STRING:
				enterOuterAlt(_localctx, 7);
				{
				setState(913);
				match(BIT_STRING);
				}
				break;
			case NOT:
			case NULL_LITERAL:
			case NULL_SPEC_LITERAL:
				enterOuterAlt(_localctx, 8);
				{
				setState(915);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(914);
					match(NOT);
					}
				}

				setState(917);
				((ConstantContext)_localctx).nullLiteral = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==NULL_LITERAL || _la==NULL_SPEC_LITERAL) ) {
					((ConstantContext)_localctx).nullLiteral = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UidContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(NaiveSqlParser.ID, 0); }
		public UidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_uid; }
	}

	public final UidContext uid() throws RecognitionException {
		UidContext _localctx = new UidContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_uid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(920);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FullIdContext extends ParserRuleContext {
		public List<UidContext> uid() {
			return getRuleContexts(UidContext.class);
		}
		public UidContext uid(int i) {
			return getRuleContext(UidContext.class,i);
		}
		public FullIdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fullId; }
	}

	public final FullIdContext fullId() throws RecognitionException {
		FullIdContext _localctx = new FullIdContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_fullId);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(922);
			uid();
			setState(925);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,128,_ctx) ) {
			case 1:
				{
				setState(923);
				match(DOT);
				setState(924);
				uid();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TableNameContext extends ParserRuleContext {
		public List<UidContext> uid() {
			return getRuleContexts(UidContext.class);
		}
		public UidContext uid(int i) {
			return getRuleContext(UidContext.class,i);
		}
		public TableNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tableName; }
	}

	public final TableNameContext tableName() throws RecognitionException {
		TableNameContext _localctx = new TableNameContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_tableName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(927);
			uid();
			setState(930);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOT) {
				{
				setState(928);
				match(DOT);
				setState(929);
				uid();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IndexColumnNameContext extends ParserRuleContext {
		public Token sortType;
		public UidContext uid() {
			return getRuleContext(UidContext.class,0);
		}
		public DecimalLiteralContext decimalLiteral() {
			return getRuleContext(DecimalLiteralContext.class,0);
		}
		public TerminalNode ASC() { return getToken(NaiveSqlParser.ASC, 0); }
		public TerminalNode DESC() { return getToken(NaiveSqlParser.DESC, 0); }
		public IndexColumnNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_indexColumnName; }
	}

	public final IndexColumnNameContext indexColumnName() throws RecognitionException {
		IndexColumnNameContext _localctx = new IndexColumnNameContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_indexColumnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(932);
			uid();
			setState(937);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LR_BRACKET) {
				{
				setState(933);
				match(LR_BRACKET);
				setState(934);
				decimalLiteral();
				setState(935);
				match(RR_BRACKET);
				}
			}

			setState(940);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASC || _la==DESC) {
				{
				setState(939);
				((IndexColumnNameContext)_localctx).sortType = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==ASC || _la==DESC) ) {
					((IndexColumnNameContext)_localctx).sortType = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UidListContext extends ParserRuleContext {
		public List<UidContext> uid() {
			return getRuleContexts(UidContext.class);
		}
		public UidContext uid(int i) {
			return getRuleContext(UidContext.class,i);
		}
		public UidListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_uidList; }
	}

	public final UidListContext uidList() throws RecognitionException {
		UidListContext _localctx = new UidListContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_uidList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(942);
			uid();
			setState(947);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(943);
				match(COMMA);
				setState(944);
				uid();
				}
				}
				setState(949);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TablesContext extends ParserRuleContext {
		public List<TableNameContext> tableName() {
			return getRuleContexts(TableNameContext.class);
		}
		public TableNameContext tableName(int i) {
			return getRuleContext(TableNameContext.class,i);
		}
		public TablesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tables; }
	}

	public final TablesContext tables() throws RecognitionException {
		TablesContext _localctx = new TablesContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_tables);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(950);
			tableName();
			setState(955);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(951);
				match(COMMA);
				setState(952);
				tableName();
				}
				}
				setState(957);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IndexColumnNamesContext extends ParserRuleContext {
		public List<IndexColumnNameContext> indexColumnName() {
			return getRuleContexts(IndexColumnNameContext.class);
		}
		public IndexColumnNameContext indexColumnName(int i) {
			return getRuleContext(IndexColumnNameContext.class,i);
		}
		public IndexColumnNamesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_indexColumnNames; }
	}

	public final IndexColumnNamesContext indexColumnNames() throws RecognitionException {
		IndexColumnNamesContext _localctx = new IndexColumnNamesContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_indexColumnNames);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(958);
			match(LR_BRACKET);
			setState(959);
			indexColumnName();
			setState(964);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(960);
				match(COMMA);
				setState(961);
				indexColumnName();
				}
				}
				setState(966);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(967);
			match(RR_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionsContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ExpressionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressions; }
	}

	public final ExpressionsContext expressions() throws RecognitionException {
		ExpressionsContext _localctx = new ExpressionsContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_expressions);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(969);
			expression(0);
			setState(974);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(970);
				match(COMMA);
				setState(971);
				expression(0);
				}
				}
				setState(976);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionsWithDefaultsContext extends ParserRuleContext {
		public List<ExpressionOrDefaultContext> expressionOrDefault() {
			return getRuleContexts(ExpressionOrDefaultContext.class);
		}
		public ExpressionOrDefaultContext expressionOrDefault(int i) {
			return getRuleContext(ExpressionOrDefaultContext.class,i);
		}
		public ExpressionsWithDefaultsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionsWithDefaults; }
	}

	public final ExpressionsWithDefaultsContext expressionsWithDefaults() throws RecognitionException {
		ExpressionsWithDefaultsContext _localctx = new ExpressionsWithDefaultsContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_expressionsWithDefaults);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(977);
			expressionOrDefault();
			setState(982);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(978);
				match(COMMA);
				setState(979);
				expressionOrDefault();
				}
				}
				setState(984);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantsContext extends ParserRuleContext {
		public List<ConstantContext> constant() {
			return getRuleContexts(ConstantContext.class);
		}
		public ConstantContext constant(int i) {
			return getRuleContext(ConstantContext.class,i);
		}
		public ConstantsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constants; }
	}

	public final ConstantsContext constants() throws RecognitionException {
		ConstantsContext _localctx = new ConstantsContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_constants);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(985);
			constant();
			setState(990);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(986);
				match(COMMA);
				setState(987);
				constant();
				}
				}
				setState(992);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleStringsContext extends ParserRuleContext {
		public List<TerminalNode> STRING_LITERAL() { return getTokens(NaiveSqlParser.STRING_LITERAL); }
		public TerminalNode STRING_LITERAL(int i) {
			return getToken(NaiveSqlParser.STRING_LITERAL, i);
		}
		public SimpleStringsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleStrings; }
	}

	public final SimpleStringsContext simpleStrings() throws RecognitionException {
		SimpleStringsContext _localctx = new SimpleStringsContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_simpleStrings);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(993);
			match(STRING_LITERAL);
			setState(998);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(994);
				match(COMMA);
				setState(995);
				match(STRING_LITERAL);
				}
				}
				setState(1000);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UserVariablesContext extends ParserRuleContext {
		public List<TerminalNode> LOCAL_ID() { return getTokens(NaiveSqlParser.LOCAL_ID); }
		public TerminalNode LOCAL_ID(int i) {
			return getToken(NaiveSqlParser.LOCAL_ID, i);
		}
		public UserVariablesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_userVariables; }
	}

	public final UserVariablesContext userVariables() throws RecognitionException {
		UserVariablesContext _localctx = new UserVariablesContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_userVariables);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1001);
			match(LOCAL_ID);
			setState(1006);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1002);
				match(COMMA);
				setState(1003);
				match(LOCAL_ID);
				}
				}
				setState(1008);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DataTypeContext extends ParserRuleContext {
		public DataTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dataType; }
	 
		public DataTypeContext() { }
		public void copyFrom(DataTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class DimensionDataTypeContext extends DataTypeContext {
		public Token typeName;
		public TerminalNode TINYINT() { return getToken(NaiveSqlParser.TINYINT, 0); }
		public TerminalNode SMALLINT() { return getToken(NaiveSqlParser.SMALLINT, 0); }
		public TerminalNode MEDIUMINT() { return getToken(NaiveSqlParser.MEDIUMINT, 0); }
		public TerminalNode INT() { return getToken(NaiveSqlParser.INT, 0); }
		public TerminalNode INTEGER() { return getToken(NaiveSqlParser.INTEGER, 0); }
		public TerminalNode BIGINT() { return getToken(NaiveSqlParser.BIGINT, 0); }
		public LengthOneDimensionContext lengthOneDimension() {
			return getRuleContext(LengthOneDimensionContext.class,0);
		}
		public TerminalNode UNSIGNED() { return getToken(NaiveSqlParser.UNSIGNED, 0); }
		public TerminalNode ZEROFILL() { return getToken(NaiveSqlParser.ZEROFILL, 0); }
		public TerminalNode REAL() { return getToken(NaiveSqlParser.REAL, 0); }
		public TerminalNode DOUBLE() { return getToken(NaiveSqlParser.DOUBLE, 0); }
		public TerminalNode FLOAT() { return getToken(NaiveSqlParser.FLOAT, 0); }
		public LengthTwoDimensionContext lengthTwoDimension() {
			return getRuleContext(LengthTwoDimensionContext.class,0);
		}
		public TerminalNode DECIMAL() { return getToken(NaiveSqlParser.DECIMAL, 0); }
		public TerminalNode NUMERIC() { return getToken(NaiveSqlParser.NUMERIC, 0); }
		public LengthTwoOptionalDimensionContext lengthTwoOptionalDimension() {
			return getRuleContext(LengthTwoOptionalDimensionContext.class,0);
		}
		public TerminalNode BIT() { return getToken(NaiveSqlParser.BIT, 0); }
		public TerminalNode TIME() { return getToken(NaiveSqlParser.TIME, 0); }
		public TerminalNode TIMESTAMP() { return getToken(NaiveSqlParser.TIMESTAMP, 0); }
		public TerminalNode DATETIME() { return getToken(NaiveSqlParser.DATETIME, 0); }
		public TerminalNode BINARY() { return getToken(NaiveSqlParser.BINARY, 0); }
		public TerminalNode VARBINARY() { return getToken(NaiveSqlParser.VARBINARY, 0); }
		public TerminalNode YEAR() { return getToken(NaiveSqlParser.YEAR, 0); }
		public DimensionDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}
	public static class StringDataTypeContext extends DataTypeContext {
		public Token typeName;
		public TerminalNode CHAR() { return getToken(NaiveSqlParser.CHAR, 0); }
		public TerminalNode VARCHAR() { return getToken(NaiveSqlParser.VARCHAR, 0); }
		public TerminalNode TINYTEXT() { return getToken(NaiveSqlParser.TINYTEXT, 0); }
		public TerminalNode TEXT() { return getToken(NaiveSqlParser.TEXT, 0); }
		public TerminalNode MEDIUMTEXT() { return getToken(NaiveSqlParser.MEDIUMTEXT, 0); }
		public TerminalNode LONGTEXT() { return getToken(NaiveSqlParser.LONGTEXT, 0); }
		public LengthOneDimensionContext lengthOneDimension() {
			return getRuleContext(LengthOneDimensionContext.class,0);
		}
		public TerminalNode BINARY() { return getToken(NaiveSqlParser.BINARY, 0); }
		public TerminalNode COLLATE() { return getToken(NaiveSqlParser.COLLATE, 0); }
		public CollationNameContext collationName() {
			return getRuleContext(CollationNameContext.class,0);
		}
		public StringDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}
	public static class SimpleDataTypeContext extends DataTypeContext {
		public Token typeName;
		public TerminalNode DATE() { return getToken(NaiveSqlParser.DATE, 0); }
		public TerminalNode TINYBLOB() { return getToken(NaiveSqlParser.TINYBLOB, 0); }
		public TerminalNode BLOB() { return getToken(NaiveSqlParser.BLOB, 0); }
		public TerminalNode MEDIUMBLOB() { return getToken(NaiveSqlParser.MEDIUMBLOB, 0); }
		public TerminalNode LONGBLOB() { return getToken(NaiveSqlParser.LONGBLOB, 0); }
		public TerminalNode BOOL() { return getToken(NaiveSqlParser.BOOL, 0); }
		public TerminalNode BOOLEAN() { return getToken(NaiveSqlParser.BOOLEAN, 0); }
		public SimpleDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}

	public final DataTypeContext dataType() throws RecognitionException {
		DataTypeContext _localctx = new DataTypeContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_dataType);
		int _la;
		try {
			setState(1055);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CHAR:
			case VARCHAR:
			case TINYTEXT:
			case TEXT:
			case MEDIUMTEXT:
			case LONGTEXT:
				_localctx = new StringDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1009);
				((StringDataTypeContext)_localctx).typeName = _input.LT(1);
				_la = _input.LA(1);
				if ( !(((((_la - 486)) & ~0x3f) == 0 && ((1L << (_la - 486)) & ((1L << (CHAR - 486)) | (1L << (VARCHAR - 486)) | (1L << (TINYTEXT - 486)) | (1L << (TEXT - 486)) | (1L << (MEDIUMTEXT - 486)) | (1L << (LONGTEXT - 486)))) != 0)) ) {
					((StringDataTypeContext)_localctx).typeName = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1011);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LR_BRACKET) {
					{
					setState(1010);
					lengthOneDimension();
					}
				}

				setState(1014);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==BINARY) {
					{
					setState(1013);
					match(BINARY);
					}
				}

				setState(1018);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COLLATE) {
					{
					setState(1016);
					match(COLLATE);
					setState(1017);
					collationName();
					}
				}

				}
				break;
			case TINYINT:
			case SMALLINT:
			case MEDIUMINT:
			case INT:
			case INTEGER:
			case BIGINT:
				_localctx = new DimensionDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1020);
				((DimensionDataTypeContext)_localctx).typeName = _input.LT(1);
				_la = _input.LA(1);
				if ( !(((((_la - 470)) & ~0x3f) == 0 && ((1L << (_la - 470)) & ((1L << (TINYINT - 470)) | (1L << (SMALLINT - 470)) | (1L << (MEDIUMINT - 470)) | (1L << (INT - 470)) | (1L << (INTEGER - 470)) | (1L << (BIGINT - 470)))) != 0)) ) {
					((DimensionDataTypeContext)_localctx).typeName = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1022);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LR_BRACKET) {
					{
					setState(1021);
					lengthOneDimension();
					}
				}

				setState(1025);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==UNSIGNED) {
					{
					setState(1024);
					match(UNSIGNED);
					}
				}

				setState(1028);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ZEROFILL) {
					{
					setState(1027);
					match(ZEROFILL);
					}
				}

				}
				break;
			case REAL:
			case DOUBLE:
			case FLOAT:
				_localctx = new DimensionDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1030);
				((DimensionDataTypeContext)_localctx).typeName = _input.LT(1);
				_la = _input.LA(1);
				if ( !(((((_la - 476)) & ~0x3f) == 0 && ((1L << (_la - 476)) & ((1L << (REAL - 476)) | (1L << (DOUBLE - 476)) | (1L << (FLOAT - 476)))) != 0)) ) {
					((DimensionDataTypeContext)_localctx).typeName = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1032);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LR_BRACKET) {
					{
					setState(1031);
					lengthTwoDimension();
					}
				}

				setState(1035);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==UNSIGNED) {
					{
					setState(1034);
					match(UNSIGNED);
					}
				}

				setState(1038);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ZEROFILL) {
					{
					setState(1037);
					match(ZEROFILL);
					}
				}

				}
				break;
			case DECIMAL:
			case NUMERIC:
				_localctx = new DimensionDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1040);
				((DimensionDataTypeContext)_localctx).typeName = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==DECIMAL || _la==NUMERIC) ) {
					((DimensionDataTypeContext)_localctx).typeName = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1042);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LR_BRACKET) {
					{
					setState(1041);
					lengthTwoOptionalDimension();
					}
				}

				setState(1045);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==UNSIGNED) {
					{
					setState(1044);
					match(UNSIGNED);
					}
				}

				setState(1048);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ZEROFILL) {
					{
					setState(1047);
					match(ZEROFILL);
					}
				}

				}
				break;
			case BOOL:
			case BOOLEAN:
			case DATE:
			case TINYBLOB:
			case BLOB:
			case MEDIUMBLOB:
			case LONGBLOB:
				_localctx = new SimpleDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1050);
				((SimpleDataTypeContext)_localctx).typeName = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==BOOL || _la==BOOLEAN || ((((_la - 481)) & ~0x3f) == 0 && ((1L << (_la - 481)) & ((1L << (DATE - 481)) | (1L << (TINYBLOB - 481)) | (1L << (BLOB - 481)) | (1L << (MEDIUMBLOB - 481)) | (1L << (LONGBLOB - 481)))) != 0)) ) {
					((SimpleDataTypeContext)_localctx).typeName = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case BIT:
			case TIME:
			case TIMESTAMP:
			case DATETIME:
			case YEAR:
			case BINARY:
			case VARBINARY:
				_localctx = new DimensionDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1051);
				((DimensionDataTypeContext)_localctx).typeName = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==BIT || ((((_la - 482)) & ~0x3f) == 0 && ((1L << (_la - 482)) & ((1L << (TIME - 482)) | (1L << (TIMESTAMP - 482)) | (1L << (DATETIME - 482)) | (1L << (YEAR - 482)) | (1L << (BINARY - 482)) | (1L << (VARBINARY - 482)))) != 0)) ) {
					((DimensionDataTypeContext)_localctx).typeName = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1053);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LR_BRACKET) {
					{
					setState(1052);
					lengthOneDimension();
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IntervalTypeContext extends ParserRuleContext {
		public IntervalTypeBaseContext intervalTypeBase() {
			return getRuleContext(IntervalTypeBaseContext.class,0);
		}
		public TerminalNode YEAR() { return getToken(NaiveSqlParser.YEAR, 0); }
		public TerminalNode YEAR_MONTH() { return getToken(NaiveSqlParser.YEAR_MONTH, 0); }
		public TerminalNode DAY_HOUR() { return getToken(NaiveSqlParser.DAY_HOUR, 0); }
		public TerminalNode DAY_MINUTE() { return getToken(NaiveSqlParser.DAY_MINUTE, 0); }
		public TerminalNode DAY_SECOND() { return getToken(NaiveSqlParser.DAY_SECOND, 0); }
		public TerminalNode HOUR_MINUTE() { return getToken(NaiveSqlParser.HOUR_MINUTE, 0); }
		public TerminalNode HOUR_SECOND() { return getToken(NaiveSqlParser.HOUR_SECOND, 0); }
		public TerminalNode MINUTE_SECOND() { return getToken(NaiveSqlParser.MINUTE_SECOND, 0); }
		public TerminalNode SECOND_MICROSECOND() { return getToken(NaiveSqlParser.SECOND_MICROSECOND, 0); }
		public TerminalNode MINUTE_MICROSECOND() { return getToken(NaiveSqlParser.MINUTE_MICROSECOND, 0); }
		public TerminalNode HOUR_MICROSECOND() { return getToken(NaiveSqlParser.HOUR_MICROSECOND, 0); }
		public TerminalNode DAY_MICROSECOND() { return getToken(NaiveSqlParser.DAY_MICROSECOND, 0); }
		public IntervalTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intervalType; }
	}

	public final IntervalTypeContext intervalType() throws RecognitionException {
		IntervalTypeContext _localctx = new IntervalTypeContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_intervalType);
		try {
			setState(1070);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case QUARTER:
			case MONTH:
			case DAY:
			case HOUR:
			case MINUTE:
			case WEEK:
			case SECOND:
			case MICROSECOND:
				enterOuterAlt(_localctx, 1);
				{
				setState(1057);
				intervalTypeBase();
				}
				break;
			case YEAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(1058);
				match(YEAR);
				}
				break;
			case YEAR_MONTH:
				enterOuterAlt(_localctx, 3);
				{
				setState(1059);
				match(YEAR_MONTH);
				}
				break;
			case DAY_HOUR:
				enterOuterAlt(_localctx, 4);
				{
				setState(1060);
				match(DAY_HOUR);
				}
				break;
			case DAY_MINUTE:
				enterOuterAlt(_localctx, 5);
				{
				setState(1061);
				match(DAY_MINUTE);
				}
				break;
			case DAY_SECOND:
				enterOuterAlt(_localctx, 6);
				{
				setState(1062);
				match(DAY_SECOND);
				}
				break;
			case HOUR_MINUTE:
				enterOuterAlt(_localctx, 7);
				{
				setState(1063);
				match(HOUR_MINUTE);
				}
				break;
			case HOUR_SECOND:
				enterOuterAlt(_localctx, 8);
				{
				setState(1064);
				match(HOUR_SECOND);
				}
				break;
			case MINUTE_SECOND:
				enterOuterAlt(_localctx, 9);
				{
				setState(1065);
				match(MINUTE_SECOND);
				}
				break;
			case SECOND_MICROSECOND:
				enterOuterAlt(_localctx, 10);
				{
				setState(1066);
				match(SECOND_MICROSECOND);
				}
				break;
			case MINUTE_MICROSECOND:
				enterOuterAlt(_localctx, 11);
				{
				setState(1067);
				match(MINUTE_MICROSECOND);
				}
				break;
			case HOUR_MICROSECOND:
				enterOuterAlt(_localctx, 12);
				{
				setState(1068);
				match(HOUR_MICROSECOND);
				}
				break;
			case DAY_MICROSECOND:
				enterOuterAlt(_localctx, 13);
				{
				setState(1069);
				match(DAY_MICROSECOND);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IntervalTypeBaseContext extends ParserRuleContext {
		public TerminalNode QUARTER() { return getToken(NaiveSqlParser.QUARTER, 0); }
		public TerminalNode MONTH() { return getToken(NaiveSqlParser.MONTH, 0); }
		public TerminalNode DAY() { return getToken(NaiveSqlParser.DAY, 0); }
		public TerminalNode HOUR() { return getToken(NaiveSqlParser.HOUR, 0); }
		public TerminalNode MINUTE() { return getToken(NaiveSqlParser.MINUTE, 0); }
		public TerminalNode WEEK() { return getToken(NaiveSqlParser.WEEK, 0); }
		public TerminalNode SECOND() { return getToken(NaiveSqlParser.SECOND, 0); }
		public TerminalNode MICROSECOND() { return getToken(NaiveSqlParser.MICROSECOND, 0); }
		public IntervalTypeBaseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intervalTypeBase; }
	}

	public final IntervalTypeBaseContext intervalTypeBase() throws RecognitionException {
		IntervalTypeBaseContext _localctx = new IntervalTypeBaseContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_intervalTypeBase);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1072);
			_la = _input.LA(1);
			if ( !(((((_la - 545)) & ~0x3f) == 0 && ((1L << (_la - 545)) & ((1L << (QUARTER - 545)) | (1L << (MONTH - 545)) | (1L << (DAY - 545)) | (1L << (HOUR - 545)) | (1L << (MINUTE - 545)) | (1L << (WEEK - 545)) | (1L << (SECOND - 545)) | (1L << (MICROSECOND - 545)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConvertedDataTypeContext extends ParserRuleContext {
		public Token typeName;
		public TerminalNode BINARY() { return getToken(NaiveSqlParser.BINARY, 0); }
		public TerminalNode NCHAR() { return getToken(NaiveSqlParser.NCHAR, 0); }
		public LengthOneDimensionContext lengthOneDimension() {
			return getRuleContext(LengthOneDimensionContext.class,0);
		}
		public TerminalNode CHAR() { return getToken(NaiveSqlParser.CHAR, 0); }
		public TerminalNode DATE() { return getToken(NaiveSqlParser.DATE, 0); }
		public TerminalNode DATETIME() { return getToken(NaiveSqlParser.DATETIME, 0); }
		public TerminalNode TIME() { return getToken(NaiveSqlParser.TIME, 0); }
		public TerminalNode DECIMAL() { return getToken(NaiveSqlParser.DECIMAL, 0); }
		public LengthTwoDimensionContext lengthTwoDimension() {
			return getRuleContext(LengthTwoDimensionContext.class,0);
		}
		public TerminalNode SIGNED() { return getToken(NaiveSqlParser.SIGNED, 0); }
		public TerminalNode UNSIGNED() { return getToken(NaiveSqlParser.UNSIGNED, 0); }
		public TerminalNode INTEGER() { return getToken(NaiveSqlParser.INTEGER, 0); }
		public ConvertedDataTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_convertedDataType; }
	}

	public final ConvertedDataTypeContext convertedDataType() throws RecognitionException {
		ConvertedDataTypeContext _localctx = new ConvertedDataTypeContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_convertedDataType);
		int _la;
		try {
			setState(1091);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NCHAR:
			case BINARY:
				enterOuterAlt(_localctx, 1);
				{
				setState(1074);
				((ConvertedDataTypeContext)_localctx).typeName = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==NCHAR || _la==BINARY) ) {
					((ConvertedDataTypeContext)_localctx).typeName = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1076);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LR_BRACKET) {
					{
					setState(1075);
					lengthOneDimension();
					}
				}

				}
				break;
			case CHAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(1078);
				((ConvertedDataTypeContext)_localctx).typeName = match(CHAR);
				setState(1080);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LR_BRACKET) {
					{
					setState(1079);
					lengthOneDimension();
					}
				}

				}
				break;
			case DATE:
			case TIME:
			case DATETIME:
				enterOuterAlt(_localctx, 3);
				{
				setState(1082);
				((ConvertedDataTypeContext)_localctx).typeName = _input.LT(1);
				_la = _input.LA(1);
				if ( !(((((_la - 481)) & ~0x3f) == 0 && ((1L << (_la - 481)) & ((1L << (DATE - 481)) | (1L << (TIME - 481)) | (1L << (DATETIME - 481)))) != 0)) ) {
					((ConvertedDataTypeContext)_localctx).typeName = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case DECIMAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(1083);
				((ConvertedDataTypeContext)_localctx).typeName = match(DECIMAL);
				setState(1085);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LR_BRACKET) {
					{
					setState(1084);
					lengthTwoDimension();
					}
				}

				}
				break;
			case UNSIGNED:
			case SIGNED:
				enterOuterAlt(_localctx, 5);
				{
				setState(1087);
				_la = _input.LA(1);
				if ( !(_la==UNSIGNED || _la==SIGNED) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1089);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==INTEGER) {
					{
					setState(1088);
					match(INTEGER);
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LengthOneDimensionContext extends ParserRuleContext {
		public DecimalLiteralContext decimalLiteral() {
			return getRuleContext(DecimalLiteralContext.class,0);
		}
		public LengthOneDimensionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lengthOneDimension; }
	}

	public final LengthOneDimensionContext lengthOneDimension() throws RecognitionException {
		LengthOneDimensionContext _localctx = new LengthOneDimensionContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_lengthOneDimension);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1093);
			match(LR_BRACKET);
			setState(1094);
			decimalLiteral();
			setState(1095);
			match(RR_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LengthTwoDimensionContext extends ParserRuleContext {
		public List<DecimalLiteralContext> decimalLiteral() {
			return getRuleContexts(DecimalLiteralContext.class);
		}
		public DecimalLiteralContext decimalLiteral(int i) {
			return getRuleContext(DecimalLiteralContext.class,i);
		}
		public LengthTwoDimensionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lengthTwoDimension; }
	}

	public final LengthTwoDimensionContext lengthTwoDimension() throws RecognitionException {
		LengthTwoDimensionContext _localctx = new LengthTwoDimensionContext(_ctx, getState());
		enterRule(_localctx, 144, RULE_lengthTwoDimension);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1097);
			match(LR_BRACKET);
			setState(1098);
			decimalLiteral();
			setState(1099);
			match(COMMA);
			setState(1100);
			decimalLiteral();
			setState(1101);
			match(RR_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LengthTwoOptionalDimensionContext extends ParserRuleContext {
		public List<DecimalLiteralContext> decimalLiteral() {
			return getRuleContexts(DecimalLiteralContext.class);
		}
		public DecimalLiteralContext decimalLiteral(int i) {
			return getRuleContext(DecimalLiteralContext.class,i);
		}
		public LengthTwoOptionalDimensionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lengthTwoOptionalDimension; }
	}

	public final LengthTwoOptionalDimensionContext lengthTwoOptionalDimension() throws RecognitionException {
		LengthTwoOptionalDimensionContext _localctx = new LengthTwoOptionalDimensionContext(_ctx, getState());
		enterRule(_localctx, 146, RULE_lengthTwoOptionalDimension);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1103);
			match(LR_BRACKET);
			setState(1104);
			decimalLiteral();
			setState(1107);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(1105);
				match(COMMA);
				setState(1106);
				decimalLiteral();
				}
			}

			setState(1109);
			match(RR_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DefaultValueContext extends ParserRuleContext {
		public TerminalNode NULL_LITERAL() { return getToken(NaiveSqlParser.NULL_LITERAL, 0); }
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public List<CurrentTimestampContext> currentTimestamp() {
			return getRuleContexts(CurrentTimestampContext.class);
		}
		public CurrentTimestampContext currentTimestamp(int i) {
			return getRuleContext(CurrentTimestampContext.class,i);
		}
		public TerminalNode ON() { return getToken(NaiveSqlParser.ON, 0); }
		public TerminalNode UPDATE() { return getToken(NaiveSqlParser.UPDATE, 0); }
		public DefaultValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_defaultValue; }
	}

	public final DefaultValueContext defaultValue() throws RecognitionException {
		DefaultValueContext _localctx = new DefaultValueContext(_ctx, getState());
		enterRule(_localctx, 148, RULE_defaultValue);
		int _la;
		try {
			setState(1119);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,162,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1111);
				match(NULL_LITERAL);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1112);
				constant();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1113);
				currentTimestamp();
				setState(1117);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ON) {
					{
					setState(1114);
					match(ON);
					setState(1115);
					match(UPDATE);
					setState(1116);
					currentTimestamp();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CurrentTimestampContext extends ParserRuleContext {
		public TerminalNode NOW() { return getToken(NaiveSqlParser.NOW, 0); }
		public TerminalNode CURRENT_TIMESTAMP() { return getToken(NaiveSqlParser.CURRENT_TIMESTAMP, 0); }
		public TerminalNode LOCALTIME() { return getToken(NaiveSqlParser.LOCALTIME, 0); }
		public TerminalNode LOCALTIMESTAMP() { return getToken(NaiveSqlParser.LOCALTIMESTAMP, 0); }
		public DecimalLiteralContext decimalLiteral() {
			return getRuleContext(DecimalLiteralContext.class,0);
		}
		public CurrentTimestampContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_currentTimestamp; }
	}

	public final CurrentTimestampContext currentTimestamp() throws RecognitionException {
		CurrentTimestampContext _localctx = new CurrentTimestampContext(_ctx, getState());
		enterRule(_localctx, 150, RULE_currentTimestamp);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1135);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CURRENT_TIMESTAMP:
			case LOCALTIME:
			case LOCALTIMESTAMP:
				{
				setState(1121);
				_la = _input.LA(1);
				if ( !(((((_la - 528)) & ~0x3f) == 0 && ((1L << (_la - 528)) & ((1L << (CURRENT_TIMESTAMP - 528)) | (1L << (LOCALTIME - 528)) | (1L << (LOCALTIMESTAMP - 528)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1127);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LR_BRACKET) {
					{
					setState(1122);
					match(LR_BRACKET);
					setState(1124);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 584)) & ~0x3f) == 0 && ((1L << (_la - 584)) & ((1L << (ZERO_DECIMAL - 584)) | (1L << (ONE_DECIMAL - 584)) | (1L << (TWO_DECIMAL - 584)) | (1L << (DECIMAL_LITERAL - 584)))) != 0)) {
						{
						setState(1123);
						decimalLiteral();
						}
					}

					setState(1126);
					match(RR_BRACKET);
					}
				}

				}
				break;
			case NOW:
				{
				setState(1129);
				match(NOW);
				setState(1130);
				match(LR_BRACKET);
				setState(1132);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 584)) & ~0x3f) == 0 && ((1L << (_la - 584)) & ((1L << (ZERO_DECIMAL - 584)) | (1L << (ONE_DECIMAL - 584)) | (1L << (TWO_DECIMAL - 584)) | (1L << (DECIMAL_LITERAL - 584)))) != 0)) {
					{
					setState(1131);
					decimalLiteral();
					}
				}

				setState(1134);
				match(RR_BRACKET);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionOrDefaultContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode DEFAULT() { return getToken(NaiveSqlParser.DEFAULT, 0); }
		public ExpressionOrDefaultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionOrDefault; }
	}

	public final ExpressionOrDefaultContext expressionOrDefault() throws RecognitionException {
		ExpressionOrDefaultContext _localctx = new ExpressionOrDefaultContext(_ctx, getState());
		enterRule(_localctx, 152, RULE_expressionOrDefault);
		try {
			setState(1139);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EXISTS:
			case FALSE:
			case INTERVAL:
			case NOT:
			case NULL_LITERAL:
			case TRUE:
			case ROW:
			case BINARY:
			case PLUS:
			case MINUS:
			case EXCLAMATION_SYMBOL:
			case BIT_NOT_OP:
			case LR_BRACKET:
			case ZERO_DECIMAL:
			case ONE_DECIMAL:
			case TWO_DECIMAL:
			case STRING_LITERAL:
			case DECIMAL_LITERAL:
			case HEXADECIMAL_LITERAL:
			case REAL_LITERAL:
			case NULL_SPEC_LITERAL:
			case BIT_STRING:
			case ID:
			case LOCAL_ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(1137);
				expression(0);
				}
				break;
			case DEFAULT:
				enterOuterAlt(_localctx, 2);
				{
				setState(1138);
				match(DEFAULT);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfExistsContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(NaiveSqlParser.IF, 0); }
		public TerminalNode EXISTS() { return getToken(NaiveSqlParser.EXISTS, 0); }
		public IfExistsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifExists; }
	}

	public final IfExistsContext ifExists() throws RecognitionException {
		IfExistsContext _localctx = new IfExistsContext(_ctx, getState());
		enterRule(_localctx, 154, RULE_ifExists);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1141);
			match(IF);
			setState(1142);
			match(EXISTS);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfNotExistsContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(NaiveSqlParser.IF, 0); }
		public TerminalNode NOT() { return getToken(NaiveSqlParser.NOT, 0); }
		public TerminalNode EXISTS() { return getToken(NaiveSqlParser.EXISTS, 0); }
		public IfNotExistsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifNotExists; }
	}

	public final IfNotExistsContext ifNotExists() throws RecognitionException {
		IfNotExistsContext _localctx = new IfNotExistsContext(_ctx, getState());
		enterRule(_localctx, 156, RULE_ifNotExists);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1144);
			match(IF);
			setState(1145);
			match(NOT);
			setState(1146);
			match(EXISTS);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 40:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		case 41:
			return predicate_sempred((PredicateContext)_localctx, predIndex);
		case 42:
			return expressionAtom_sempred((ExpressionAtomContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean predicate_sempred(PredicateContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 7);
		case 2:
			return precpred(_ctx, 5);
		case 3:
			return precpred(_ctx, 4);
		case 4:
			return precpred(_ctx, 2);
		case 5:
			return precpred(_ctx, 9);
		case 6:
			return precpred(_ctx, 8);
		case 7:
			return precpred(_ctx, 6);
		case 8:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean expressionAtom_sempred(ExpressionAtomContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return precpred(_ctx, 2);
		case 10:
			return precpred(_ctx, 1);
		case 11:
			return precpred(_ctx, 10);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u025a\u047f\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\3\2\5\2\u00a2\n\2\3\2\5"+
		"\2\u00a5\n\2\3\2\3\2\3\3\3\3\5\3\u00ab\n\3\3\3\3\3\3\3\7\3\u00b0\n\3\f"+
		"\3\16\3\u00b3\13\3\3\3\3\3\5\3\u00b7\n\3\3\3\5\3\u00ba\n\3\3\3\5\3\u00bd"+
		"\n\3\3\4\3\4\5\4\u00c1\n\4\3\5\3\5\3\6\3\6\5\6\u00c7\n\6\3\7\3\7\3\7\5"+
		"\7\u00cc\n\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\7\b\u00d5\n\b\f\b\16\b\u00d8"+
		"\13\b\3\b\3\b\3\t\3\t\3\t\3\n\3\n\7\n\u00e1\n\n\f\n\16\n\u00e4\13\n\3"+
		"\13\3\13\3\13\3\13\3\13\5\13\u00eb\n\13\3\13\3\13\3\13\5\13\u00f0\n\13"+
		"\5\13\u00f2\n\13\3\f\3\f\3\f\5\f\u00f7\n\f\3\f\3\f\5\f\u00fb\n\f\3\r\3"+
		"\r\3\r\5\r\u0100\n\r\3\16\3\16\3\16\3\16\6\16\u0106\n\16\r\16\16\16\u0107"+
		"\3\16\3\16\5\16\u010c\n\16\3\16\3\16\5\16\u0110\n\16\5\16\u0112\n\16\3"+
		"\16\5\16\u0115\n\16\3\16\5\16\u0118\n\16\3\16\3\16\6\16\u011c\n\16\r\16"+
		"\16\16\u011d\3\16\3\16\5\16\u0122\n\16\3\16\5\16\u0125\n\16\3\16\5\16"+
		"\u0128\n\16\3\16\5\16\u012b\n\16\5\16\u012d\n\16\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\5\17\u0137\n\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\5\20\u0141\n\20\3\21\3\21\7\21\u0145\n\21\f\21\16\21\u0148\13\21"+
		"\3\21\3\21\5\21\u014c\n\21\3\21\5\21\u014f\n\21\3\21\5\21\u0152\n\21\3"+
		"\21\5\21\u0155\n\21\3\21\3\21\7\21\u0159\n\21\f\21\16\21\u015c\13\21\3"+
		"\21\3\21\5\21\u0160\n\21\3\21\5\21\u0163\n\21\3\21\5\21\u0166\n\21\3\21"+
		"\5\21\u0169\n\21\5\21\u016b\n\21\3\22\3\22\7\22\u016f\n\22\f\22\16\22"+
		"\u0172\13\22\3\22\3\22\5\22\u0176\n\22\3\22\5\22\u0179\n\22\3\22\5\22"+
		"\u017c\n\22\3\23\3\23\5\23\u0180\n\23\3\23\3\23\3\24\3\24\5\24\u0186\n"+
		"\24\3\24\3\24\5\24\u018a\n\24\3\25\3\25\3\25\3\25\3\25\5\25\u0191\n\25"+
		"\3\26\3\26\5\26\u0195\n\26\3\26\3\26\7\26\u0199\n\26\f\26\16\26\u019c"+
		"\13\26\3\27\3\27\3\27\3\27\3\27\3\27\5\27\u01a4\n\27\3\27\5\27\u01a7\n"+
		"\27\5\27\u01a9\n\27\3\30\3\30\3\30\3\30\7\30\u01af\n\30\f\30\16\30\u01b2"+
		"\13\30\3\31\3\31\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\5\32\u01be\n"+
		"\32\3\32\3\32\5\32\u01c2\n\32\3\32\5\32\u01c5\n\32\3\32\3\32\5\32\u01c9"+
		"\n\32\3\33\3\33\5\33\u01cd\n\33\3\33\5\33\u01d0\n\33\3\33\5\33\u01d3\n"+
		"\33\3\33\3\33\3\33\3\33\3\33\5\33\u01da\n\33\3\33\3\33\3\33\3\33\3\33"+
		"\7\33\u01e1\n\33\f\33\16\33\u01e4\13\33\5\33\u01e6\n\33\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\7\34\u01f2\n\34\f\34\16\34\u01f5\13"+
		"\34\5\34\u01f7\n\34\3\35\3\35\5\35\u01fb\n\35\3\36\3\36\3\36\3\36\5\36"+
		"\u0201\n\36\3\37\3\37\3\37\3\37\5\37\u0207\n\37\3\37\3\37\3\37\3\37\3"+
		"\37\7\37\u020e\n\37\f\37\16\37\u0211\13\37\5\37\u0213\n\37\3\37\3\37\5"+
		"\37\u0217\n\37\3 \3 \5 \u021b\n \3!\3!\3!\3!\5!\u0221\n!\3!\3!\3!\3!\3"+
		"!\5!\u0228\n!\3\"\3\"\3\"\3\"\3\"\7\"\u022f\n\"\f\"\16\"\u0232\13\"\3"+
		"#\3#\5#\u0236\n#\3$\3$\3$\7$\u023b\n$\f$\16$\u023e\13$\3%\3%\7%\u0242"+
		"\n%\f%\16%\u0245\13%\3%\3%\3%\7%\u024a\n%\f%\16%\u024d\13%\3%\3%\5%\u0251"+
		"\n%\3&\3&\3&\3&\3&\3&\5&\u0259\n&\3&\5&\u025c\n&\3&\5&\u025f\n&\3&\3&"+
		"\3&\7&\u0264\n&\f&\16&\u0267\13&\5&\u0269\n&\3&\3&\3&\3&\3&\5&\u0270\n"+
		"&\3&\5&\u0273\n&\3&\3&\3&\3&\3&\3&\5&\u027b\n&\3\'\3\'\3\'\3\'\5\'\u0281"+
		"\n\'\3\'\3\'\3\'\3\'\3(\3(\3(\3(\3(\5(\u028c\n(\3)\5)\u028f\n)\3)\3)\3"+
		")\3)\3)\3)\3)\3)\3)\5)\u029a\n)\3)\3)\3)\3)\5)\u02a0\n)\3)\3)\5)\u02a4"+
		"\n)\3)\3)\3)\3)\3)\3)\3)\3)\3)\5)\u02af\n)\3)\3)\3)\5)\u02b4\n)\5)\u02b6"+
		"\n)\3)\3)\5)\u02ba\n)\3*\3*\3*\3*\3*\3*\5*\u02c2\n*\3*\3*\3*\5*\u02c7"+
		"\n*\3*\3*\3*\3*\7*\u02cd\n*\f*\16*\u02d0\13*\3+\3+\3+\5+\u02d5\n+\3+\3"+
		"+\3+\3+\3+\3+\3+\3+\5+\u02df\n+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\5+\u02ec"+
		"\n+\3+\3+\3+\3+\5+\u02f2\n+\3+\3+\3+\3+\5+\u02f8\n+\3+\3+\3+\3+\3+\3+"+
		"\3+\3+\3+\3+\3+\3+\3+\3+\5+\u0308\n+\3+\3+\3+\3+\5+\u030e\n+\7+\u0310"+
		"\n+\f+\16+\u0313\13+\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\7,\u0321\n,\f"+
		",\16,\u0324\13,\3,\3,\3,\3,\3,\3,\3,\6,\u032d\n,\r,\16,\u032e\3,\3,\3"+
		",\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\5,\u0340\n,\3,\3,\3,\3,\3,\3,\3"+
		",\3,\3,\3,\3,\7,\u034d\n,\f,\16,\u0350\13,\3-\3-\3.\3.\3.\3.\3.\3.\3."+
		"\3.\3.\3.\3.\3.\3.\3.\5.\u0362\n.\3/\3/\3/\3/\3/\3/\3/\5/\u036b\n/\3\60"+
		"\3\60\3\60\3\60\3\60\3\60\3\60\5\60\u0374\n\60\3\61\3\61\3\62\3\62\5\62"+
		"\u037a\n\62\3\63\3\63\3\64\3\64\6\64\u0380\n\64\r\64\16\64\u0381\3\65"+
		"\3\65\3\66\3\66\3\67\5\67\u0389\n\67\3\67\3\67\38\38\38\38\38\38\38\3"+
		"8\38\58\u0396\n8\38\58\u0399\n8\39\39\3:\3:\3:\5:\u03a0\n:\3;\3;\3;\5"+
		";\u03a5\n;\3<\3<\3<\3<\3<\5<\u03ac\n<\3<\5<\u03af\n<\3=\3=\3=\7=\u03b4"+
		"\n=\f=\16=\u03b7\13=\3>\3>\3>\7>\u03bc\n>\f>\16>\u03bf\13>\3?\3?\3?\3"+
		"?\7?\u03c5\n?\f?\16?\u03c8\13?\3?\3?\3@\3@\3@\7@\u03cf\n@\f@\16@\u03d2"+
		"\13@\3A\3A\3A\7A\u03d7\nA\fA\16A\u03da\13A\3B\3B\3B\7B\u03df\nB\fB\16"+
		"B\u03e2\13B\3C\3C\3C\7C\u03e7\nC\fC\16C\u03ea\13C\3D\3D\3D\7D\u03ef\n"+
		"D\fD\16D\u03f2\13D\3E\3E\5E\u03f6\nE\3E\5E\u03f9\nE\3E\3E\5E\u03fd\nE"+
		"\3E\3E\5E\u0401\nE\3E\5E\u0404\nE\3E\5E\u0407\nE\3E\3E\5E\u040b\nE\3E"+
		"\5E\u040e\nE\3E\5E\u0411\nE\3E\3E\5E\u0415\nE\3E\5E\u0418\nE\3E\5E\u041b"+
		"\nE\3E\3E\3E\5E\u0420\nE\5E\u0422\nE\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F"+
		"\3F\3F\5F\u0431\nF\3G\3G\3H\3H\5H\u0437\nH\3H\3H\5H\u043b\nH\3H\3H\3H"+
		"\5H\u0440\nH\3H\3H\5H\u0444\nH\5H\u0446\nH\3I\3I\3I\3I\3J\3J\3J\3J\3J"+
		"\3J\3K\3K\3K\3K\5K\u0456\nK\3K\3K\3L\3L\3L\3L\3L\3L\5L\u0460\nL\5L\u0462"+
		"\nL\3M\3M\3M\5M\u0467\nM\3M\5M\u046a\nM\3M\3M\3M\5M\u046f\nM\3M\5M\u0472"+
		"\nM\3N\3N\5N\u0476\nN\3O\3O\3O\3P\3P\3P\3P\3P\2\5RTVQ\2\4\6\b\n\f\16\20"+
		"\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhj"+
		"lnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e\u0090\u0092"+
		"\u0094\u0096\u0098\u009a\u009c\u009e\2 \4\2\23\23}}\4\2\b\b,,\4\2\b\b"+
		",-\5\2\'\'AA\\\\\4\2\u00a3\u00a3\u01cd\u01cd\4\2\r\r))\5\2::CC\u00a1\u00a1"+
		"\4\2EEOO\4\2  GG\4\2TT\u0080\u0080\4\2cc\u023f\u023f\5\2\67\67\u0099\u0099"+
		"\u01c6\u01c6\4\2ww\u0081\u0081\5\2\b\b\u00b1\u00b1\u01a0\u01a0\6\2cc\u0237"+
		"\u0237\u0239\u0239\u023f\u0240\3\2\u0234\u023b\4\2\u024a\u024c\u0253\u0253"+
		"\4\2\67\67\u0099\u0099\4\2ee\u0256\u0256\4\2\u01e8\u01e9\u01f0\u01f3\3"+
		"\2\u01d8\u01dd\3\2\u01de\u01e0\3\2\u01e1\u01e2\5\2\u00bb\u00bc\u01e3\u01e3"+
		"\u01ec\u01ef\5\2\u00b9\u00b9\u01e4\u01e7\u01ea\u01eb\3\2\u0223\u022a\4"+
		"\2\u0150\u0150\u01ea\u01ea\4\2\u01e3\u01e4\u01e6\u01e6\4\2\u009e\u009e"+
		"\u019a\u019a\4\2\u0212\u0213\u0219\u0219\2\u0519\2\u00a1\3\2\2\2\4\u00b1"+
		"\3\2\2\2\6\u00c0\3\2\2\2\b\u00c2\3\2\2\2\n\u00c6\3\2\2\2\f\u00c8\3\2\2"+
		"\2\16\u00d0\3\2\2\2\20\u00db\3\2\2\2\22\u00de\3\2\2\2\24\u00f1\3\2\2\2"+
		"\26\u00f3\3\2\2\2\30\u00ff\3\2\2\2\32\u012c\3\2\2\2\34\u0136\3\2\2\2\36"+
		"\u0140\3\2\2\2 \u016a\3\2\2\2\"\u016c\3\2\2\2$\u017d\3\2\2\2&\u0183\3"+
		"\2\2\2(\u0190\3\2\2\2*\u0194\3\2\2\2,\u01a8\3\2\2\2.\u01aa\3\2\2\2\60"+
		"\u01b3\3\2\2\2\62\u01b5\3\2\2\2\64\u01ca\3\2\2\2\66\u01f6\3\2\2\28\u01fa"+
		"\3\2\2\2:\u01fc\3\2\2\2<\u0202\3\2\2\2>\u0218\3\2\2\2@\u021c\3\2\2\2B"+
		"\u0229\3\2\2\2D\u0233\3\2\2\2F\u0237\3\2\2\2H\u0250\3\2\2\2J\u027a\3\2"+
		"\2\2L\u027c\3\2\2\2N\u028b\3\2\2\2P\u02b9\3\2\2\2R\u02c6\3\2\2\2T\u02d1"+
		"\3\2\2\2V\u033f\3\2\2\2X\u0351\3\2\2\2Z\u0361\3\2\2\2\\\u036a\3\2\2\2"+
		"^\u0373\3\2\2\2`\u0375\3\2\2\2b\u0379\3\2\2\2d\u037b\3\2\2\2f\u037d\3"+
		"\2\2\2h\u0383\3\2\2\2j\u0385\3\2\2\2l\u0388\3\2\2\2n\u0398\3\2\2\2p\u039a"+
		"\3\2\2\2r\u039c\3\2\2\2t\u03a1\3\2\2\2v\u03a6\3\2\2\2x\u03b0\3\2\2\2z"+
		"\u03b8\3\2\2\2|\u03c0\3\2\2\2~\u03cb\3\2\2\2\u0080\u03d3\3\2\2\2\u0082"+
		"\u03db\3\2\2\2\u0084\u03e3\3\2\2\2\u0086\u03eb\3\2\2\2\u0088\u0421\3\2"+
		"\2\2\u008a\u0430\3\2\2\2\u008c\u0432\3\2\2\2\u008e\u0445\3\2\2\2\u0090"+
		"\u0447\3\2\2\2\u0092\u044b\3\2\2\2\u0094\u0451\3\2\2\2\u0096\u0461\3\2"+
		"\2\2\u0098\u0471\3\2\2\2\u009a\u0475\3\2\2\2\u009c\u0477\3\2\2\2\u009e"+
		"\u047a\3\2\2\2\u00a0\u00a2\5\4\3\2\u00a1\u00a0\3\2\2\2\u00a1\u00a2\3\2"+
		"\2\2\u00a2\u00a4\3\2\2\2\u00a3\u00a5\7\u0238\2\2\u00a4\u00a3\3\2\2\2\u00a4"+
		"\u00a5\3\2\2\2\u00a5\u00a6\3\2\2\2\u00a6\u00a7\7\2\2\3\u00a7\3\3\2\2\2"+
		"\u00a8\u00aa\5\6\4\2\u00a9\u00ab\7\u0238\2\2\u00aa\u00a9\3\2\2\2\u00aa"+
		"\u00ab\3\2\2\2\u00ab\u00ac\3\2\2\2\u00ac\u00ad\7\u0248\2\2\u00ad\u00b0"+
		"\3\2\2\2\u00ae\u00b0\5\b\5\2\u00af\u00a8\3\2\2\2\u00af\u00ae\3\2\2\2\u00b0"+
		"\u00b3\3\2\2\2\u00b1\u00af\3\2\2\2\u00b1\u00b2\3\2\2\2\u00b2\u00bc\3\2"+
		"\2\2\u00b3\u00b1\3\2\2\2\u00b4\u00b9\5\6\4\2\u00b5\u00b7\7\u0238\2\2\u00b6"+
		"\u00b5\3\2\2\2\u00b6\u00b7\3\2\2\2\u00b7\u00b8\3\2\2\2\u00b8\u00ba\7\u0248"+
		"\2\2\u00b9\u00b6\3\2\2\2\u00b9\u00ba\3\2\2\2\u00ba\u00bd\3\2\2\2\u00bb"+
		"\u00bd\5\b\5\2\u00bc\u00b4\3\2\2\2\u00bc\u00bb\3\2\2\2\u00bd\5\3\2\2\2"+
		"\u00be\u00c1\5\n\6\2\u00bf\u00c1\5\30\r\2\u00c0\u00be\3\2\2\2\u00c0\u00bf"+
		"\3\2\2\2\u00c1\7\3\2\2\2\u00c2\u00c3\7\u0248\2\2\u00c3\t\3\2\2\2\u00c4"+
		"\u00c7\5\f\7\2\u00c5\u00c7\5\26\f\2\u00c6\u00c4\3\2\2\2\u00c6\u00c5\3"+
		"\2\2\2\u00c7\13\3\2\2\2\u00c8\u00c9\7\37\2\2\u00c9\u00cb\7\u0093\2\2\u00ca"+
		"\u00cc\5\u009eP\2\u00cb\u00ca\3\2\2\2\u00cb\u00cc\3\2\2\2\u00cc\u00cd"+
		"\3\2\2\2\u00cd\u00ce\5t;\2\u00ce\u00cf\5\16\b\2\u00cf\r\3\2\2\2\u00d0"+
		"\u00d1\7\u0245\2\2\u00d1\u00d6\5\20\t\2\u00d2\u00d3\7\u0247\2\2\u00d3"+
		"\u00d5\5\20\t\2\u00d4\u00d2\3\2\2\2\u00d5\u00d8\3\2\2\2\u00d6\u00d4\3"+
		"\2\2\2\u00d6\u00d7\3\2\2\2\u00d7\u00d9\3\2\2\2\u00d8\u00d6\3\2\2\2\u00d9"+
		"\u00da\7\u0246\2\2\u00da\17\3\2\2\2\u00db\u00dc\5p9\2\u00dc\u00dd\5\22"+
		"\n\2\u00dd\21\3\2\2\2\u00de\u00e2\5\u0088E\2\u00df\u00e1\5\24\13\2\u00e0"+
		"\u00df\3\2\2\2\u00e1\u00e4\3\2\2\2\u00e2\u00e0\3\2\2\2\u00e2\u00e3\3\2"+
		"\2\2\u00e3\23\3\2\2\2\u00e4\u00e2\3\2\2\2\u00e5\u00f2\5l\67\2\u00e6\u00e7"+
		"\7&\2\2\u00e7\u00f2\5\u0096L\2\u00e8\u00f2\7\u00ab\2\2\u00e9\u00eb\7p"+
		"\2\2\u00ea\u00e9\3\2\2\2\u00ea\u00eb\3\2\2\2\u00eb\u00ec\3\2\2\2\u00ec"+
		"\u00f2\7O\2\2\u00ed\u00ef\7\u009c\2\2\u00ee\u00f0\7O\2\2\u00ef\u00ee\3"+
		"\2\2\2\u00ef\u00f0\3\2\2\2\u00f0\u00f2\3\2\2\2\u00f1\u00e5\3\2\2\2\u00f1"+
		"\u00e6\3\2\2\2\u00f1\u00e8\3\2\2\2\u00f1\u00ea\3\2\2\2\u00f1\u00ed\3\2"+
		"\2\2\u00f2\25\3\2\2\2\u00f3\u00f4\7.\2\2\u00f4\u00f6\7\u0093\2\2\u00f5"+
		"\u00f7\5\u009cO\2\u00f6\u00f5\3\2\2\2\u00f6\u00f7\3\2\2\2\u00f7\u00f8"+
		"\3\2\2\2\u00f8\u00fa\5z>\2\u00f9\u00fb\t\2\2\2\u00fa\u00f9\3\2\2\2\u00fa"+
		"\u00fb\3\2\2\2\u00fb\27\3\2\2\2\u00fc\u0100\5\32\16\2\u00fd\u0100\5\60"+
		"\31\2\u00fe\u0100\5\64\33\2\u00ff\u00fc\3\2\2\2\u00ff\u00fd\3\2\2\2\u00ff"+
		"\u00fe\3\2\2\2\u0100\31\3\2\2\2\u0101\u012d\5 \21\2\u0102\u012d\5\34\17"+
		"\2\u0103\u0105\5\"\22\2\u0104\u0106\5&\24\2\u0105\u0104\3\2\2\2\u0106"+
		"\u0107\3\2\2\2\u0107\u0105\3\2\2\2\u0107\u0108\3\2\2\2\u0108\u0111\3\2"+
		"\2\2\u0109\u010b\7\u009b\2\2\u010a\u010c\t\3\2\2\u010b\u010a\3\2\2\2\u010b"+
		"\u010c\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u0110\5 \21\2\u010e\u0110\5\34"+
		"\17\2\u010f\u010d\3\2\2\2\u010f\u010e\3\2\2\2\u0110\u0112\3\2\2\2\u0111"+
		"\u0109\3\2\2\2\u0111\u0112\3\2\2\2\u0112\u0114\3\2\2\2\u0113\u0115\5B"+
		"\"\2\u0114\u0113\3\2\2\2\u0114\u0115\3\2\2\2\u0115\u0117\3\2\2\2\u0116"+
		"\u0118\5@!\2\u0117\u0116\3\2\2\2\u0117\u0118\3\2\2\2\u0118\u012d\3\2\2"+
		"\2\u0119\u011b\5\36\20\2\u011a\u011c\5$\23\2\u011b\u011a\3\2\2\2\u011c"+
		"\u011d\3\2\2\2\u011d\u011b\3\2\2\2\u011d\u011e\3\2\2\2\u011e\u0124\3\2"+
		"\2\2\u011f\u0121\7\u009b\2\2\u0120\u0122\t\3\2\2\u0121\u0120\3\2\2\2\u0121"+
		"\u0122\3\2\2\2\u0122\u0123\3\2\2\2\u0123\u0125\5\34\17\2\u0124\u011f\3"+
		"\2\2\2\u0124\u0125\3\2\2\2\u0125\u0127\3\2\2\2\u0126\u0128\5B\"\2\u0127"+
		"\u0126\3\2\2\2\u0127\u0128\3\2\2\2\u0128\u012a\3\2\2\2\u0129\u012b\5@"+
		"!\2\u012a\u0129\3\2\2\2\u012a\u012b\3\2\2\2\u012b\u012d\3\2\2\2\u012c"+
		"\u0101\3\2\2\2\u012c\u0102\3\2\2\2\u012c\u0103\3\2\2\2\u012c\u0119\3\2"+
		"\2\2\u012d\33\3\2\2\2\u012e\u012f\7\u0245\2\2\u012f\u0130\5 \21\2\u0130"+
		"\u0131\7\u0246\2\2\u0131\u0137\3\2\2\2\u0132\u0133\7\u0245\2\2\u0133\u0134"+
		"\5\34\17\2\u0134\u0135\7\u0246\2\2\u0135\u0137\3\2\2\2\u0136\u012e\3\2"+
		"\2\2\u0136\u0132\3\2\2\2\u0137\35\3\2\2\2\u0138\u0139\7\u0245\2\2\u0139"+
		"\u013a\5\"\22\2\u013a\u013b\7\u0246\2\2\u013b\u0141\3\2\2\2\u013c\u013d"+
		"\7\u0245\2\2\u013d\u013e\5\36\20\2\u013e\u013f\7\u0246\2\2\u013f\u0141"+
		"\3\2\2\2\u0140\u0138\3\2\2\2\u0140\u013c\3\2\2\2\u0141\37\3\2\2\2\u0142"+
		"\u0146\7\u0084\2\2\u0143\u0145\5(\25\2\u0144\u0143\3\2\2\2\u0145\u0148"+
		"\3\2\2\2\u0146\u0144\3\2\2\2\u0146\u0147\3\2\2\2\u0147\u0149\3\2\2\2\u0148"+
		"\u0146\3\2\2\2\u0149\u014b\5*\26\2\u014a\u014c\5.\30\2\u014b\u014a\3\2"+
		"\2\2\u014b\u014c\3\2\2\2\u014c\u014e\3\2\2\2\u014d\u014f\5<\37\2\u014e"+
		"\u014d\3\2\2\2\u014e\u014f\3\2\2\2\u014f\u0151\3\2\2\2\u0150\u0152\5B"+
		"\"\2\u0151\u0150\3\2\2\2\u0151\u0152\3\2\2\2\u0152\u0154\3\2\2\2\u0153"+
		"\u0155\5@!\2\u0154\u0153\3\2\2\2\u0154\u0155\3\2\2\2\u0155\u016b\3\2\2"+
		"\2\u0156\u015a\7\u0084\2\2\u0157\u0159\5(\25\2\u0158\u0157\3\2\2\2\u0159"+
		"\u015c\3\2\2\2\u015a\u0158\3\2\2\2\u015a\u015b\3\2\2\2\u015b\u015d\3\2"+
		"\2\2\u015c\u015a\3\2\2\2\u015d\u015f\5*\26\2\u015e\u0160\5<\37\2\u015f"+
		"\u015e\3\2\2\2\u015f\u0160\3\2\2\2\u0160\u0162\3\2\2\2\u0161\u0163\5B"+
		"\"\2\u0162\u0161\3\2\2\2\u0162\u0163\3\2\2\2\u0163\u0165\3\2\2\2\u0164"+
		"\u0166\5@!\2\u0165\u0164\3\2\2\2\u0165\u0166\3\2\2\2\u0166\u0168\3\2\2"+
		"\2\u0167\u0169\5.\30\2\u0168\u0167\3\2\2\2\u0168\u0169\3\2\2\2\u0169\u016b"+
		"\3\2\2\2\u016a\u0142\3\2\2\2\u016a\u0156\3\2\2\2\u016b!\3\2\2\2\u016c"+
		"\u0170\7\u0084\2\2\u016d\u016f\5(\25\2\u016e\u016d\3\2\2\2\u016f\u0172"+
		"\3\2\2\2\u0170\u016e\3\2\2\2\u0170\u0171\3\2\2\2\u0171\u0173\3\2\2\2\u0172"+
		"\u0170\3\2\2\2\u0173\u0175\5*\26\2\u0174\u0176\5<\37\2\u0175\u0174\3\2"+
		"\2\2\u0175\u0176\3\2\2\2\u0176\u0178\3\2\2\2\u0177\u0179\5B\"\2\u0178"+
		"\u0177\3\2\2\2\u0178\u0179\3\2\2\2\u0179\u017b\3\2\2\2\u017a\u017c\5@"+
		"!\2\u017b\u017a\3\2\2\2\u017b\u017c\3\2\2\2\u017c#\3\2\2\2\u017d\u017f"+
		"\7\u009b\2\2\u017e\u0180\t\3\2\2\u017f\u017e\3\2\2\2\u017f\u0180\3\2\2"+
		"\2\u0180\u0181\3\2\2\2\u0181\u0182\5\36\20\2\u0182%\3\2\2\2\u0183\u0185"+
		"\7\u009b\2\2\u0184\u0186\t\3\2\2\u0185\u0184\3\2\2\2\u0185\u0186\3\2\2"+
		"\2\u0186\u0189\3\2\2\2\u0187\u018a\5\"\22\2\u0188\u018a\5\36\20\2\u0189"+
		"\u0187\3\2\2\2\u0189\u0188\3\2\2\2\u018a\'\3\2\2\2\u018b\u0191\t\4\2\2"+
		"\u018c\u0191\7A\2\2\u018d\u0191\7\u0092\2\2\u018e\u0191\7\u008f\2\2\u018f"+
		"\u0191\7\u008e\2\2\u0190\u018b\3\2\2\2\u0190\u018c\3\2\2\2\u0190\u018d"+
		"\3\2\2\2\u0190\u018e\3\2\2\2\u0190\u018f\3\2\2\2\u0191)\3\2\2\2\u0192"+
		"\u0195\7\u0234\2\2\u0193\u0195\5,\27\2\u0194\u0192\3\2\2\2\u0194\u0193"+
		"\3\2\2\2\u0195\u019a\3\2\2\2\u0196\u0197\7\u0247\2\2\u0197\u0199\5,\27"+
		"\2\u0198\u0196\3\2\2\2\u0199\u019c\3\2\2\2\u019a\u0198\3\2\2\2\u019a\u019b"+
		"\3\2\2\2\u019b+\3\2\2\2\u019c\u019a\3\2\2\2\u019d\u019e\5r:\2\u019e\u019f"+
		"\7\u0244\2\2\u019f\u01a0\7\u0234\2\2\u01a0\u01a9\3\2\2\2\u01a1\u01a6\5"+
		"r:\2\u01a2\u01a4\7\f\2\2\u01a3\u01a2\3\2\2\2\u01a3\u01a4\3\2\2\2\u01a4"+
		"\u01a5\3\2\2\2\u01a5\u01a7\5p9\2\u01a6\u01a3\3\2\2\2\u01a6\u01a7\3\2\2"+
		"\2\u01a7\u01a9\3\2\2\2\u01a8\u019d\3\2\2\2\u01a8\u01a1\3\2\2\2\u01a9-"+
		"\3\2\2\2\u01aa\u01ab\7K\2\2\u01ab\u01b0\58\35\2\u01ac\u01ad\7\u0247\2"+
		"\2\u01ad\u01af\58\35\2\u01ae\u01ac\3\2\2\2\u01af\u01b2\3\2\2\2\u01b0\u01ae"+
		"\3\2\2\2\u01b0\u01b1\3\2\2\2\u01b1/\3\2\2\2\u01b2\u01b0\3\2\2\2\u01b3"+
		"\u01b4\5\62\32\2\u01b4\61\3\2\2\2\u01b5\u01b6\7(\2\2\u01b6\u01b7\7<\2"+
		"\2\u01b7\u01bd\5t;\2\u01b8\u01b9\7o\2\2\u01b9\u01ba\7\u0245\2\2\u01ba"+
		"\u01bb\5x=\2\u01bb\u01bc\7\u0246\2\2\u01bc\u01be\3\2\2\2\u01bd\u01b8\3"+
		"\2\2\2\u01bd\u01be\3\2\2\2\u01be\u01c1\3\2\2\2\u01bf\u01c0\7\u00a5\2\2"+
		"\u01c0\u01c2\5R*\2\u01c1\u01bf\3\2\2\2\u01c1\u01c2\3\2\2\2\u01c2\u01c4"+
		"\3\2\2\2\u01c3\u01c5\5B\"\2\u01c4\u01c3\3\2\2\2\u01c4\u01c5\3\2\2\2\u01c5"+
		"\u01c8\3\2\2\2\u01c6\u01c7\7V\2\2\u01c7\u01c9\5d\63\2\u01c8\u01c6\3\2"+
		"\2\2\u01c8\u01c9\3\2\2\2\u01c9\63\3\2\2\2\u01ca\u01cc\7I\2\2\u01cb\u01cd"+
		"\t\5\2\2\u01cc\u01cb\3\2\2\2\u01cc\u01cd\3\2\2\2\u01cd\u01cf\3\2\2\2\u01ce"+
		"\u01d0\7C\2\2\u01cf\u01ce\3\2\2\2\u01cf\u01d0\3\2\2\2\u01d0\u01d2\3\2"+
		"\2\2\u01d1\u01d3\7K\2\2\u01d2\u01d1\3\2\2\2\u01d2\u01d3\3\2\2\2\u01d3"+
		"\u01d4\3\2\2\2\u01d4\u01e5\5t;\2\u01d5\u01d6\7\u0245\2\2\u01d6\u01d7\5"+
		"x=\2\u01d7\u01d8\7\u0246\2\2\u01d8\u01da\3\2\2\2\u01d9\u01d5\3\2\2\2\u01d9"+
		"\u01da\3\2\2\2\u01da\u01db\3\2\2\2\u01db\u01e6\5\66\34\2\u01dc\u01dd\7"+
		"\u0085\2\2\u01dd\u01e2\5:\36\2\u01de\u01df\7\u0247\2\2\u01df\u01e1\5:"+
		"\36\2\u01e0\u01de\3\2\2\2\u01e1\u01e4\3\2\2\2\u01e2\u01e0\3\2\2\2\u01e2"+
		"\u01e3\3\2\2\2\u01e3\u01e6\3\2\2\2\u01e4\u01e2\3\2\2\2\u01e5\u01d9\3\2"+
		"\2\2\u01e5\u01dc\3\2\2\2\u01e6\65\3\2\2\2\u01e7\u01f7\5\32\16\2\u01e8"+
		"\u01e9\t\6\2\2\u01e9\u01ea\7\u0245\2\2\u01ea\u01eb\5\u0080A\2\u01eb\u01f3"+
		"\7\u0246\2\2\u01ec\u01ed\7\u0247\2\2\u01ed\u01ee\7\u0245\2\2\u01ee\u01ef"+
		"\5\u0080A\2\u01ef\u01f0\7\u0246\2\2\u01f0\u01f2\3\2\2\2\u01f1\u01ec\3"+
		"\2\2\2\u01f2\u01f5\3\2\2\2\u01f3\u01f1\3\2\2\2\u01f3\u01f4\3\2\2\2\u01f4"+
		"\u01f7\3\2\2\2\u01f5\u01f3\3\2\2\2\u01f6\u01e7\3\2\2\2\u01f6\u01e8\3\2"+
		"\2\2\u01f7\67\3\2\2\2\u01f8\u01fb\5p9\2\u01f9\u01fb\7\u0259\2\2\u01fa"+
		"\u01f8\3\2\2\2\u01fa\u01f9\3\2\2\2\u01fb9\3\2\2\2\u01fc\u01fd\5r:\2\u01fd"+
		"\u0200\7\u023c\2\2\u01fe\u0201\5R*\2\u01ff\u0201\7&\2\2\u0200\u01fe\3"+
		"\2\2\2\u0200\u01ff\3\2\2\2\u0201;\3\2\2\2\u0202\u0203\7<\2\2\u0203\u0206"+
		"\5F$\2\u0204\u0205\7\u00a5\2\2\u0205\u0207\5R*\2\u0206\u0204\3\2\2\2\u0206"+
		"\u0207\3\2\2\2\u0207\u0212\3\2\2\2\u0208\u0209\7?\2\2\u0209\u020a\7\21"+
		"\2\2\u020a\u020f\5> \2\u020b\u020c\7\u0247\2\2\u020c\u020e\5> \2\u020d"+
		"\u020b\3\2\2\2\u020e\u0211\3\2\2\2\u020f\u020d\3\2\2\2\u020f\u0210\3\2"+
		"\2\2\u0210\u0213\3\2\2\2\u0211\u020f\3\2\2\2\u0212\u0208\3\2\2\2\u0212"+
		"\u0213\3\2\2\2\u0213\u0216\3\2\2\2\u0214\u0215\7@\2\2\u0215\u0217\5R*"+
		"\2\u0216\u0214\3\2\2\2\u0216\u0217\3\2\2\2\u0217=\3\2\2\2\u0218\u021a"+
		"\5R*\2\u0219\u021b\t\7\2\2\u021a\u0219\3\2\2\2\u021a\u021b\3\2\2\2\u021b"+
		"?\3\2\2\2\u021c\u0227\7V\2\2\u021d\u021e\5d\63\2\u021e\u021f\7\u0247\2"+
		"\2\u021f\u0221\3\2\2\2\u0220\u021d\3\2\2\2\u0220\u0221\3\2\2\2\u0221\u0222"+
		"\3\2\2\2\u0222\u0228\5d\63\2\u0223\u0224\5d\63\2\u0224\u0225\7\u0157\2"+
		"\2\u0225\u0226\5d\63\2\u0226\u0228\3\2\2\2\u0227\u0220\3\2\2\2\u0227\u0223"+
		"\3\2\2\2\u0228A\3\2\2\2\u0229\u022a\7k\2\2\u022a\u022b\7\21\2\2\u022b"+
		"\u0230\5D#\2\u022c\u022d\7\u0247\2\2\u022d\u022f\5D#\2\u022e\u022c\3\2"+
		"\2\2\u022f\u0232\3\2\2\2\u0230\u022e\3\2\2\2\u0230\u0231\3\2\2\2\u0231"+
		"C\3\2\2\2\u0232\u0230\3\2\2\2\u0233\u0235\5R*\2\u0234\u0236\t\7\2\2\u0235"+
		"\u0234\3\2\2\2\u0235\u0236\3\2\2\2\u0236E\3\2\2\2\u0237\u023c\5H%\2\u0238"+
		"\u0239\7\u0247\2\2\u0239\u023b\5H%\2\u023a\u0238\3\2\2\2\u023b\u023e\3"+
		"\2\2\2\u023c\u023a\3\2\2\2\u023c\u023d\3\2\2\2\u023dG\3\2\2\2\u023e\u023c"+
		"\3\2\2\2\u023f\u0243\5J&\2\u0240\u0242\5P)\2\u0241\u0240\3\2\2\2\u0242"+
		"\u0245\3\2\2\2\u0243\u0241\3\2\2\2\u0243\u0244\3\2\2\2\u0244\u0251\3\2"+
		"\2\2\u0245\u0243\3\2\2\2\u0246\u0247\7\u0245\2\2\u0247\u024b\5J&\2\u0248"+
		"\u024a\5P)\2\u0249\u0248\3\2\2\2\u024a\u024d\3\2\2\2\u024b\u0249\3\2\2"+
		"\2\u024b\u024c\3\2\2\2\u024c\u024e\3\2\2\2\u024d\u024b\3\2\2\2\u024e\u024f"+
		"\7\u0246\2\2\u024f\u0251\3\2\2\2\u0250\u023f\3\2\2\2\u0250\u0246\3\2\2"+
		"\2\u0251I\3\2\2\2\u0252\u0258\5t;\2\u0253\u0254\7o\2\2\u0254\u0255\7\u0245"+
		"\2\2\u0255\u0256\5x=\2\u0256\u0257\7\u0246\2\2\u0257\u0259\3\2\2\2\u0258"+
		"\u0253\3\2\2\2\u0258\u0259\3\2\2\2\u0259\u025e\3\2\2\2\u025a\u025c\7\f"+
		"\2\2\u025b\u025a\3\2\2\2\u025b\u025c\3\2\2\2\u025c\u025d\3\2\2\2\u025d"+
		"\u025f\5p9\2\u025e\u025b\3\2\2\2\u025e\u025f\3\2\2\2\u025f\u0268\3\2\2"+
		"\2\u0260\u0265\5L\'\2\u0261\u0262\7\u0247\2\2\u0262\u0264\5L\'\2\u0263"+
		"\u0261\3\2\2\2\u0264\u0267\3\2\2\2\u0265\u0263\3\2\2\2\u0265\u0266\3\2"+
		"\2\2\u0266\u0269\3\2\2\2\u0267\u0265\3\2\2\2\u0268\u0260\3\2\2\2\u0268"+
		"\u0269\3\2\2\2\u0269\u027b\3\2\2\2\u026a\u0270\5\32\16\2\u026b\u026c\7"+
		"\u0245\2\2\u026c\u026d\5\32\16\2\u026d\u026e\7\u0246\2\2\u026e\u0270\3"+
		"\2\2\2\u026f\u026a\3\2\2\2\u026f\u026b\3\2\2\2\u0270\u0272\3\2\2\2\u0271"+
		"\u0273\7\f\2\2\u0272\u0271\3\2\2\2\u0272\u0273\3\2\2\2\u0273\u0274\3\2"+
		"\2\2\u0274\u0275\5p9\2\u0275\u027b\3\2\2\2\u0276\u0277\7\u0245\2\2\u0277"+
		"\u0278\5F$\2\u0278\u0279\7\u0246\2\2\u0279\u027b\3\2\2\2\u027a\u0252\3"+
		"\2\2\2\u027a\u026f\3\2\2\2\u027a\u0276\3\2\2\2\u027bK\3\2\2\2\u027c\u027d"+
		"\t\b\2\2\u027d\u0280\t\t\2\2\u027e\u027f\79\2\2\u027f\u0281\5N(\2\u0280"+
		"\u027e\3\2\2\2\u0280\u0281\3\2\2\2\u0281\u0282\3\2\2\2\u0282\u0283\7\u0245"+
		"\2\2\u0283\u0284\5x=\2\u0284\u0285\7\u0246\2\2\u0285M\3\2\2\2\u0286\u028c"+
		"\7N\2\2\u0287\u0288\7k\2\2\u0288\u028c\7\21\2\2\u0289\u028a\7?\2\2\u028a"+
		"\u028c\7\21\2\2\u028b\u0286\3\2\2\2\u028b\u0287\3\2\2\2\u028b\u0289\3"+
		"\2\2\2\u028cO\3\2\2\2\u028d\u028f\t\n\2\2\u028e\u028d\3\2\2\2\u028e\u028f"+
		"\3\2\2\2\u028f\u0290\3\2\2\2\u0290\u0291\7N\2\2\u0291\u0299\5J&\2\u0292"+
		"\u0293\7f\2\2\u0293\u029a\5R*\2\u0294\u0295\7\u00a2\2\2\u0295\u0296\7"+
		"\u0245\2\2\u0296\u0297\5x=\2\u0297\u0298\7\u0246\2\2\u0298\u029a\3\2\2"+
		"\2\u0299\u0292\3\2\2\2\u0299\u0294\3\2\2\2\u0299\u029a\3\2\2\2\u029a\u02ba"+
		"\3\2\2\2\u029b\u029c\7\u0092\2\2\u029c\u029f\5J&\2\u029d\u029e\7f\2\2"+
		"\u029e\u02a0\5R*\2\u029f\u029d\3\2\2\2\u029f\u02a0\3\2\2\2\u02a0\u02ba"+
		"\3\2\2\2\u02a1\u02a3\t\13\2\2\u02a2\u02a4\7m\2\2\u02a3\u02a2\3\2\2\2\u02a3"+
		"\u02a4\3\2\2\2\u02a4\u02a5\3\2\2\2\u02a5\u02a6\7N\2\2\u02a6\u02ae\5J&"+
		"\2\u02a7\u02a8\7f\2\2\u02a8\u02af\5R*\2\u02a9\u02aa\7\u00a2\2\2\u02aa"+
		"\u02ab\7\u0245\2\2\u02ab\u02ac\5x=\2\u02ac\u02ad\7\u0246\2\2\u02ad\u02af"+
		"\3\2\2\2\u02ae\u02a7\3\2\2\2\u02ae\u02a9\3\2\2\2\u02af\u02ba\3\2\2\2\u02b0"+
		"\u02b5\7b\2\2\u02b1\u02b3\t\13\2\2\u02b2\u02b4\7m\2\2\u02b3\u02b2\3\2"+
		"\2\2\u02b3\u02b4\3\2\2\2\u02b4\u02b6\3\2\2\2\u02b5\u02b1\3\2\2\2\u02b5"+
		"\u02b6\3\2\2\2\u02b6\u02b7\3\2\2\2\u02b7\u02b8\7N\2\2\u02b8\u02ba\5J&"+
		"\2\u02b9\u028e\3\2\2\2\u02b9\u029b\3\2\2\2\u02b9\u02a1\3\2\2\2\u02b9\u02b0"+
		"\3\2\2\2\u02baQ\3\2\2\2\u02bb\u02bc\b*\1\2\u02bc\u02bd\t\f\2\2\u02bd\u02c7"+
		"\5R*\6\u02be\u02bf\5T+\2\u02bf\u02c1\7L\2\2\u02c0\u02c2\7c\2\2\u02c1\u02c0"+
		"\3\2\2\2\u02c1\u02c2\3\2\2\2\u02c2\u02c3\3\2\2\2\u02c3\u02c4\t\r\2\2\u02c4"+
		"\u02c7\3\2\2\2\u02c5\u02c7\5T+\2\u02c6\u02bb\3\2\2\2\u02c6\u02be\3\2\2"+
		"\2\u02c6\u02c5\3\2\2\2\u02c7\u02ce\3\2\2\2\u02c8\u02c9\f\5\2\2\u02c9\u02ca"+
		"\5\\/\2\u02ca\u02cb\5R*\6\u02cb\u02cd\3\2\2\2\u02cc\u02c8\3\2\2\2\u02cd"+
		"\u02d0\3\2\2\2\u02ce\u02cc\3\2\2\2\u02ce\u02cf\3\2\2\2\u02cfS\3\2\2\2"+
		"\u02d0\u02ce\3\2\2\2\u02d1\u02d4\b+\1\2\u02d2\u02d3\7\u0259\2\2\u02d3"+
		"\u02d5\7\u022b\2\2\u02d4\u02d2\3\2\2\2\u02d4\u02d5\3\2\2\2\u02d5\u02d6"+
		"\3\2\2\2\u02d6\u02d7\5V,\2\u02d7\u0311\3\2\2\2\u02d8\u02d9\f\t\2\2\u02d9"+
		"\u02da\5Z.\2\u02da\u02db\5T+\n\u02db\u0310\3\2\2\2\u02dc\u02de\f\7\2\2"+
		"\u02dd\u02df\7c\2\2\u02de\u02dd\3\2\2\2\u02de\u02df\3\2\2\2\u02df\u02e0"+
		"\3\2\2\2\u02e0\u02e1\7\17\2\2\u02e1\u02e2\5T+\2\u02e2\u02e3\7\13\2\2\u02e3"+
		"\u02e4\5T+\b\u02e4\u0310\3\2\2\2\u02e5\u02e6\f\6\2\2\u02e6\u02e7\7\u01a2"+
		"\2\2\u02e7\u02e8\7U\2\2\u02e8\u0310\5T+\7\u02e9\u02eb\f\4\2\2\u02ea\u02ec"+
		"\7c\2\2\u02eb\u02ea\3\2\2\2\u02eb\u02ec\3\2\2\2\u02ec\u02ed\3\2\2\2\u02ed"+
		"\u02ee\t\16\2\2\u02ee\u0310\5T+\5\u02ef\u02f1\f\13\2\2\u02f0\u02f2\7c"+
		"\2\2\u02f1\u02f0\3\2\2\2\u02f1\u02f2\3\2\2\2\u02f2\u02f3\3\2\2\2\u02f3"+
		"\u02f4\7D\2\2\u02f4\u02f7\7\u0245\2\2\u02f5\u02f8\5\32\16\2\u02f6\u02f8"+
		"\5~@\2\u02f7\u02f5\3\2\2\2\u02f7\u02f6\3\2\2\2\u02f8\u02f9\3\2\2\2\u02f9"+
		"\u02fa\7\u0246\2\2\u02fa\u0310\3\2\2\2\u02fb\u02fc\f\n\2\2\u02fc\u02fd"+
		"\7L\2\2\u02fd\u0310\5l\67\2\u02fe\u02ff\f\b\2\2\u02ff\u0300\5Z.\2\u0300"+
		"\u0301\t\17\2\2\u0301\u0302\7\u0245\2\2\u0302\u0303\5\32\16\2\u0303\u0304"+
		"\7\u0246\2\2\u0304\u0310\3\2\2\2\u0305\u0307\f\5\2\2\u0306\u0308\7c\2"+
		"\2\u0307\u0306\3\2\2\2\u0307\u0308\3\2\2\2\u0308\u0309\3\2\2\2\u0309\u030a"+
		"\7U\2\2\u030a\u030d\5T+\2\u030b\u030c\7\u00f0\2\2\u030c\u030e\7\u0252"+
		"\2\2\u030d\u030b\3\2\2\2\u030d\u030e\3\2\2\2\u030e\u0310\3\2\2\2\u030f"+
		"\u02d8\3\2\2\2\u030f\u02dc\3\2\2\2\u030f\u02e5\3\2\2\2\u030f\u02e9\3\2"+
		"\2\2\u030f\u02ef\3\2\2\2\u030f\u02fb\3\2\2\2\u030f\u02fe\3\2\2\2\u030f"+
		"\u0305\3\2\2\2\u0310\u0313\3\2\2\2\u0311\u030f\3\2\2\2\u0311\u0312\3\2"+
		"\2\2\u0312U\3\2\2\2\u0313\u0311\3\2\2\2\u0314\u0315\b,\1\2\u0315\u0340"+
		"\5n8\2\u0316\u0340\5r:\2\u0317\u0318\5X-\2\u0318\u0319\5V,\13\u0319\u0340"+
		"\3\2\2\2\u031a\u031b\7\u01ea\2\2\u031b\u0340\5V,\n\u031c\u031d\7\u0245"+
		"\2\2\u031d\u0322\5R*\2\u031e\u031f\7\u0247\2\2\u031f\u0321\5R*\2\u0320"+
		"\u031e\3\2\2\2\u0321\u0324\3\2\2\2\u0322\u0320\3\2\2\2\u0322\u0323\3\2"+
		"\2\2\u0323\u0325\3\2\2\2\u0324\u0322\3\2\2\2\u0325\u0326\7\u0246\2\2\u0326"+
		"\u0340\3\2\2\2\u0327\u0328\7\u0190\2\2\u0328\u0329\7\u0245\2\2\u0329\u032c"+
		"\5R*\2\u032a\u032b\7\u0247\2\2\u032b\u032d\5R*\2\u032c\u032a\3\2\2\2\u032d"+
		"\u032e\3\2\2\2\u032e\u032c\3\2\2\2\u032e\u032f\3\2\2\2\u032f\u0330\3\2"+
		"\2\2\u0330\u0331\7\u0246\2\2\u0331\u0340\3\2\2\2\u0332\u0333\7\64\2\2"+
		"\u0333\u0334\7\u0245\2\2\u0334\u0335\5\32\16\2\u0335\u0336\7\u0246\2\2"+
		"\u0336\u0340\3\2\2\2\u0337\u0338\7\u0245\2\2\u0338\u0339\5\32\16\2\u0339"+
		"\u033a\7\u0246\2\2\u033a\u0340\3\2\2\2\u033b\u033c\7J\2\2\u033c\u033d"+
		"\5R*\2\u033d\u033e\5\u008aF\2\u033e\u0340\3\2\2\2\u033f\u0314\3\2\2\2"+
		"\u033f\u0316\3\2\2\2\u033f\u0317\3\2\2\2\u033f\u031a\3\2\2\2\u033f\u031c"+
		"\3\2\2\2\u033f\u0327\3\2\2\2\u033f\u0332\3\2\2\2\u033f\u0337\3\2\2\2\u033f"+
		"\u033b\3\2\2\2\u0340\u034e\3\2\2\2\u0341\u0342\f\4\2\2\u0342\u0343\5^"+
		"\60\2\u0343\u0344\5V,\5\u0344\u034d\3\2\2\2\u0345\u0346\f\3\2\2\u0346"+
		"\u0347\5`\61\2\u0347\u0348\5V,\4\u0348\u034d\3\2\2\2\u0349\u034a\f\f\2"+
		"\2\u034a\u034b\7\31\2\2\u034b\u034d\5b\62\2\u034c\u0341\3\2\2\2\u034c"+
		"\u0345\3\2\2\2\u034c\u0349\3\2\2\2\u034d\u0350\3\2\2\2\u034e\u034c\3\2"+
		"\2\2\u034e\u034f\3\2\2\2\u034fW\3\2\2\2\u0350\u034e\3\2\2\2\u0351\u0352"+
		"\t\20\2\2\u0352Y\3\2\2\2\u0353\u0362\7\u023c\2\2\u0354\u0362\7\u023d\2"+
		"\2\u0355\u0362\7\u023e\2\2\u0356\u0357\7\u023e\2\2\u0357\u0362\7\u023c"+
		"\2\2\u0358\u0359\7\u023d\2\2\u0359\u0362\7\u023c\2\2\u035a\u035b\7\u023e"+
		"\2\2\u035b\u0362\7\u023d\2\2\u035c\u035d\7\u023f\2\2\u035d\u0362\7\u023c"+
		"\2\2\u035e\u035f\7\u023e\2\2\u035f\u0360\7\u023c\2\2\u0360\u0362\7\u023d"+
		"\2\2\u0361\u0353\3\2\2\2\u0361\u0354\3\2\2\2\u0361\u0355\3\2\2\2\u0361"+
		"\u0356\3\2\2\2\u0361\u0358\3\2\2\2\u0361\u035a\3\2\2\2\u0361\u035c\3\2"+
		"\2\2\u0361\u035e\3\2\2\2\u0362[\3\2\2\2\u0363\u036b\7\13\2\2\u0364\u0365"+
		"\7\u0242\2\2\u0365\u036b\7\u0242\2\2\u0366\u036b\7\u00a9\2\2\u0367\u036b"+
		"\7j\2\2\u0368\u0369\7\u0241\2\2\u0369\u036b\7\u0241\2\2\u036a\u0363\3"+
		"\2\2\2\u036a\u0364\3\2\2\2\u036a\u0366\3\2\2\2\u036a\u0367\3\2\2\2\u036a"+
		"\u0368\3\2\2\2\u036b]\3\2\2\2\u036c\u036d\7\u023e\2\2\u036d\u0374\7\u023e"+
		"\2\2\u036e\u036f\7\u023d\2\2\u036f\u0374\7\u023d\2\2\u0370\u0374\7\u0242"+
		"\2\2\u0371\u0374\7\u0243\2\2\u0372\u0374\7\u0241\2\2\u0373\u036c\3\2\2"+
		"\2\u0373\u036e\3\2\2\2\u0373\u0370\3\2\2\2\u0373\u0371\3\2\2\2\u0373\u0372"+
		"\3\2\2\2\u0374_\3\2\2\2\u0375\u0376\t\21\2\2\u0376a\3\2\2\2\u0377\u037a"+
		"\5p9\2\u0378\u037a\7\u0252\2\2\u0379\u0377\3\2\2\2\u0379\u0378\3\2\2\2"+
		"\u037ac\3\2\2\2\u037b\u037c\t\22\2\2\u037ce\3\2\2\2\u037d\u037f\7\u0252"+
		"\2\2\u037e\u0380\7\u0252\2\2\u037f\u037e\3\2\2\2\u0380\u0381\3\2\2\2\u0381"+
		"\u037f\3\2\2\2\u0381\u0382\3\2\2\2\u0382g\3\2\2\2\u0383\u0384\t\23\2\2"+
		"\u0384i\3\2\2\2\u0385\u0386\7\u0254\2\2\u0386k\3\2\2\2\u0387\u0389\7c"+
		"\2\2\u0388\u0387\3\2\2\2\u0388\u0389\3\2\2\2\u0389\u038a\3\2\2\2\u038a"+
		"\u038b\t\24\2\2\u038bm\3\2\2\2\u038c\u0399\5f\64\2\u038d\u0399\5d\63\2"+
		"\u038e\u038f\7\u0239\2\2\u038f\u0399\5d\63\2\u0390\u0399\5j\66\2\u0391"+
		"\u0399\5h\65\2\u0392\u0399\7\u0255\2\2\u0393\u0399\7\u0257\2\2\u0394\u0396"+
		"\7c\2\2\u0395\u0394\3\2\2\2\u0395\u0396\3\2\2\2\u0396\u0397\3\2\2\2\u0397"+
		"\u0399\t\24\2\2\u0398\u038c\3\2\2\2\u0398\u038d\3\2\2\2\u0398\u038e\3"+
		"\2\2\2\u0398\u0390\3\2\2\2\u0398\u0391\3\2\2\2\u0398\u0392\3\2\2\2\u0398"+
		"\u0393\3\2\2\2\u0398\u0395\3\2\2\2\u0399o\3\2\2\2\u039a\u039b\7\u0258"+
		"\2\2\u039bq\3\2\2\2\u039c\u039f\5p9\2\u039d\u039e\7\u0244\2\2\u039e\u03a0"+
		"\5p9\2\u039f\u039d\3\2\2\2\u039f\u03a0\3\2\2\2\u03a0s\3\2\2\2\u03a1\u03a4"+
		"\5p9\2\u03a2\u03a3\7\u0244\2\2\u03a3\u03a5\5p9\2\u03a4\u03a2\3\2\2\2\u03a4"+
		"\u03a5\3\2\2\2\u03a5u\3\2\2\2\u03a6\u03ab\5p9\2\u03a7\u03a8\7\u0245\2"+
		"\2\u03a8\u03a9\5d\63\2\u03a9\u03aa\7\u0246\2\2\u03aa\u03ac\3\2\2\2\u03ab"+
		"\u03a7\3\2\2\2\u03ab\u03ac\3\2\2\2\u03ac\u03ae\3\2\2\2\u03ad\u03af\t\7"+
		"\2\2\u03ae\u03ad\3\2\2\2\u03ae\u03af\3\2\2\2\u03afw\3\2\2\2\u03b0\u03b5"+
		"\5p9\2\u03b1\u03b2\7\u0247\2\2\u03b2\u03b4\5p9\2\u03b3\u03b1\3\2\2\2\u03b4"+
		"\u03b7\3\2\2\2\u03b5\u03b3\3\2\2\2\u03b5\u03b6\3\2\2\2\u03b6y\3\2\2\2"+
		"\u03b7\u03b5\3\2\2\2\u03b8\u03bd\5t;\2\u03b9\u03ba\7\u0247\2\2\u03ba\u03bc"+
		"\5t;\2\u03bb\u03b9\3\2\2\2\u03bc\u03bf\3\2\2\2\u03bd\u03bb\3\2\2\2\u03bd"+
		"\u03be\3\2\2\2\u03be{\3\2\2\2\u03bf\u03bd\3\2\2\2\u03c0\u03c1\7\u0245"+
		"\2\2\u03c1\u03c6\5v<\2\u03c2\u03c3\7\u0247\2\2\u03c3\u03c5\5v<\2\u03c4"+
		"\u03c2\3\2\2\2\u03c5\u03c8\3\2\2\2\u03c6\u03c4\3\2\2\2\u03c6\u03c7\3\2"+
		"\2\2\u03c7\u03c9\3\2\2\2\u03c8\u03c6\3\2\2\2\u03c9\u03ca\7\u0246\2\2\u03ca"+
		"}\3\2\2\2\u03cb\u03d0\5R*\2\u03cc\u03cd\7\u0247\2\2\u03cd\u03cf\5R*\2"+
		"\u03ce\u03cc\3\2\2\2\u03cf\u03d2\3\2\2\2\u03d0\u03ce\3\2\2\2\u03d0\u03d1"+
		"\3\2\2\2\u03d1\177\3\2\2\2\u03d2\u03d0\3\2\2\2\u03d3\u03d8\5\u009aN\2"+
		"\u03d4\u03d5\7\u0247\2\2\u03d5\u03d7\5\u009aN\2\u03d6\u03d4\3\2\2\2\u03d7"+
		"\u03da\3\2\2\2\u03d8\u03d6\3\2\2\2\u03d8\u03d9\3\2\2\2\u03d9\u0081\3\2"+
		"\2\2\u03da\u03d8\3\2\2\2\u03db\u03e0\5n8\2\u03dc\u03dd\7\u0247\2\2\u03dd"+
		"\u03df\5n8\2\u03de\u03dc\3\2\2\2\u03df\u03e2\3\2\2\2\u03e0\u03de\3\2\2"+
		"\2\u03e0\u03e1\3\2\2\2\u03e1\u0083\3\2\2\2\u03e2\u03e0\3\2\2\2\u03e3\u03e8"+
		"\7\u0252\2\2\u03e4\u03e5\7\u0247\2\2\u03e5\u03e7\7\u0252\2\2\u03e6\u03e4"+
		"\3\2\2\2\u03e7\u03ea\3\2\2\2\u03e8\u03e6\3\2\2\2\u03e8\u03e9\3\2\2\2\u03e9"+
		"\u0085\3\2\2\2\u03ea\u03e8\3\2\2\2\u03eb\u03f0\7\u0259\2\2\u03ec\u03ed"+
		"\7\u0247\2\2\u03ed\u03ef\7\u0259\2\2\u03ee\u03ec\3\2\2\2\u03ef\u03f2\3"+
		"\2\2\2\u03f0\u03ee\3\2\2\2\u03f0\u03f1\3\2\2\2\u03f1\u0087\3\2\2\2\u03f2"+
		"\u03f0\3\2\2\2\u03f3\u03f5\t\25\2\2\u03f4\u03f6\5\u0090I\2\u03f5\u03f4"+
		"\3\2\2\2\u03f5\u03f6\3\2\2\2\u03f6\u03f8\3\2\2\2\u03f7\u03f9\7\u01ea\2"+
		"\2\u03f8\u03f7\3\2\2\2\u03f8\u03f9\3\2\2\2\u03f9\u03fc\3\2\2\2\u03fa\u03fb"+
		"\7\31\2\2\u03fb\u03fd\5b\62\2\u03fc\u03fa\3\2\2\2\u03fc\u03fd\3\2\2\2"+
		"\u03fd\u0422\3\2\2\2\u03fe\u0400\t\26\2\2\u03ff\u0401\5\u0090I\2\u0400"+
		"\u03ff\3\2\2\2\u0400\u0401\3\2\2\2\u0401\u0403\3\2\2\2\u0402\u0404\7\u009e"+
		"\2\2\u0403\u0402\3\2\2\2\u0403\u0404\3\2\2\2\u0404\u0406\3\2\2\2\u0405"+
		"\u0407\7\u00aa\2\2\u0406\u0405\3\2\2\2\u0406\u0407\3\2\2\2\u0407\u0422"+
		"\3\2\2\2\u0408\u040a\t\27\2\2\u0409\u040b\5\u0092J\2\u040a\u0409\3\2\2"+
		"\2\u040a\u040b\3\2\2\2\u040b\u040d\3\2\2\2\u040c\u040e\7\u009e\2\2\u040d"+
		"\u040c\3\2\2\2\u040d\u040e\3\2\2\2\u040e\u0410\3\2\2\2\u040f\u0411\7\u00aa"+
		"\2\2\u0410\u040f\3\2\2\2\u0410\u0411\3\2\2\2\u0411\u0422\3\2\2\2\u0412"+
		"\u0414\t\30\2\2\u0413\u0415\5\u0094K\2\u0414\u0413\3\2\2\2\u0414\u0415"+
		"\3\2\2\2\u0415\u0417\3\2\2\2\u0416\u0418\7\u009e\2\2\u0417\u0416\3\2\2"+
		"\2\u0417\u0418\3\2\2\2\u0418\u041a\3\2\2\2\u0419\u041b\7\u00aa\2\2\u041a"+
		"\u0419\3\2\2\2\u041a\u041b\3\2\2\2\u041b\u0422\3\2\2\2\u041c\u0422\t\31"+
		"\2\2\u041d\u041f\t\32\2\2\u041e\u0420\5\u0090I\2\u041f\u041e\3\2\2\2\u041f"+
		"\u0420\3\2\2\2\u0420\u0422\3\2\2\2\u0421\u03f3\3\2\2\2\u0421\u03fe\3\2"+
		"\2\2\u0421\u0408\3\2\2\2\u0421\u0412\3\2\2\2\u0421\u041c\3\2\2\2\u0421"+
		"\u041d\3\2\2\2\u0422\u0089\3\2\2\2\u0423\u0431\5\u008cG\2\u0424\u0431"+
		"\7\u01e7\2\2\u0425\u0431\7\u01f5\2\2\u0426\u0431\7\u01f6\2\2\u0427\u0431"+
		"\7\u01f7\2\2\u0428\u0431\7\u01f8\2\2\u0429\u0431\7\u01f9\2\2\u042a\u0431"+
		"\7\u01fa\2\2\u042b\u0431\7\u01fb\2\2\u042c\u0431\7\u01fc\2\2\u042d\u0431"+
		"\7\u01fd\2\2\u042e\u0431\7\u01fe\2\2\u042f\u0431\7\u01ff\2\2\u0430\u0423"+
		"\3\2\2\2\u0430\u0424\3\2\2\2\u0430\u0425\3\2\2\2\u0430\u0426\3\2\2\2\u0430"+
		"\u0427\3\2\2\2\u0430\u0428\3\2\2\2\u0430\u0429\3\2\2\2\u0430\u042a\3\2"+
		"\2\2\u0430\u042b\3\2\2\2\u0430\u042c\3\2\2\2\u0430\u042d\3\2\2\2\u0430"+
		"\u042e\3\2\2\2\u0430\u042f\3\2\2\2\u0431\u008b\3\2\2\2\u0432\u0433\t\33"+
		"\2\2\u0433\u008d\3\2\2\2\u0434\u0436\t\34\2\2\u0435\u0437\5\u0090I\2\u0436"+
		"\u0435\3\2\2\2\u0436\u0437\3\2\2\2\u0437\u0446\3\2\2\2\u0438\u043a\7\u01e8"+
		"\2\2\u0439\u043b\5\u0090I\2\u043a\u0439\3\2\2\2\u043a\u043b\3\2\2\2\u043b"+
		"\u0446\3\2\2\2\u043c\u0446\t\35\2\2\u043d\u043f\7\u01e1\2\2\u043e\u0440"+
		"\5\u0092J\2\u043f\u043e\3\2\2\2\u043f\u0440\3\2\2\2\u0440\u0446\3\2\2"+
		"\2\u0441\u0443\t\36\2\2\u0442\u0444\7\u01dc\2\2\u0443\u0442\3\2\2\2\u0443"+
		"\u0444\3\2\2\2\u0444\u0446\3\2\2\2\u0445\u0434\3\2\2\2\u0445\u0438\3\2"+
		"\2\2\u0445\u043c\3\2\2\2\u0445\u043d\3\2\2\2\u0445\u0441\3\2\2\2\u0446"+
		"\u008f\3\2\2\2\u0447\u0448\7\u0245\2\2\u0448\u0449\5d\63\2\u0449\u044a"+
		"\7\u0246\2\2\u044a\u0091\3\2\2\2\u044b\u044c\7\u0245\2\2\u044c\u044d\5"+
		"d\63\2\u044d\u044e\7\u0247\2\2\u044e\u044f\5d\63\2\u044f\u0450\7\u0246"+
		"\2\2\u0450\u0093\3\2\2\2\u0451\u0452\7\u0245\2\2\u0452\u0455\5d\63\2\u0453"+
		"\u0454\7\u0247\2\2\u0454\u0456\5d\63\2\u0455\u0453\3\2\2\2\u0455\u0456"+
		"\3\2\2\2\u0456\u0457\3\2\2\2\u0457\u0458\7\u0246\2\2\u0458\u0095\3\2\2"+
		"\2\u0459\u0462\7e\2\2\u045a\u0462\5n8\2\u045b\u045f\5\u0098M\2\u045c\u045d"+
		"\7f\2\2\u045d\u045e\7\u009f\2\2\u045e\u0460\5\u0098M\2\u045f\u045c\3\2"+
		"\2\2\u045f\u0460\3\2\2\2\u0460\u0462\3\2\2\2\u0461\u0459\3\2\2\2\u0461"+
		"\u045a\3\2\2\2\u0461\u045b\3\2\2\2\u0462\u0097\3\2\2\2\u0463\u0469\t\37"+
		"\2\2\u0464\u0466\7\u0245\2\2\u0465\u0467\5d\63\2\u0466\u0465\3\2\2\2\u0466"+
		"\u0467\3\2\2\2\u0467\u0468\3\2\2\2\u0468\u046a\7\u0246\2\2\u0469\u0464"+
		"\3\2\2\2\u0469\u046a\3\2\2\2\u046a\u0472\3\2\2\2\u046b\u046c\7\u021a\2"+
		"\2\u046c\u046e\7\u0245\2\2\u046d\u046f\5d\63\2\u046e\u046d\3\2\2\2\u046e"+
		"\u046f\3\2\2\2\u046f\u0470\3\2\2\2\u0470\u0472\7\u0246\2\2\u0471\u0463"+
		"\3\2\2\2\u0471\u046b\3\2\2\2\u0472\u0099\3\2\2\2\u0473\u0476\5R*\2\u0474"+
		"\u0476\7&\2\2\u0475\u0473\3\2\2\2\u0475\u0474\3\2\2\2\u0476\u009b\3\2"+
		"\2\2\u0477\u0478\7B\2\2\u0478\u0479\7\64\2\2\u0479\u009d\3\2\2\2\u047a"+
		"\u047b\7B\2\2\u047b\u047c\7c\2\2\u047c\u047d\7\64\2\2\u047d\u009f\3\2"+
		"\2\2\u00aa\u00a1\u00a4\u00aa\u00af\u00b1\u00b6\u00b9\u00bc\u00c0\u00c6"+
		"\u00cb\u00d6\u00e2\u00ea\u00ef\u00f1\u00f6\u00fa\u00ff\u0107\u010b\u010f"+
		"\u0111\u0114\u0117\u011d\u0121\u0124\u0127\u012a\u012c\u0136\u0140\u0146"+
		"\u014b\u014e\u0151\u0154\u015a\u015f\u0162\u0165\u0168\u016a\u0170\u0175"+
		"\u0178\u017b\u017f\u0185\u0189\u0190\u0194\u019a\u01a3\u01a6\u01a8\u01b0"+
		"\u01bd\u01c1\u01c4\u01c8\u01cc\u01cf\u01d2\u01d9\u01e2\u01e5\u01f3\u01f6"+
		"\u01fa\u0200\u0206\u020f\u0212\u0216\u021a\u0220\u0227\u0230\u0235\u023c"+
		"\u0243\u024b\u0250\u0258\u025b\u025e\u0265\u0268\u026f\u0272\u027a\u0280"+
		"\u028b\u028e\u0299\u029f\u02a3\u02ae\u02b3\u02b5\u02b9\u02c1\u02c6\u02ce"+
		"\u02d4\u02de\u02eb\u02f1\u02f7\u0307\u030d\u030f\u0311\u0322\u032e\u033f"+
		"\u034c\u034e\u0361\u036a\u0373\u0379\u0381\u0388\u0395\u0398\u039f\u03a4"+
		"\u03ab\u03ae\u03b5\u03bd\u03c6\u03d0\u03d8\u03e0\u03e8\u03f0\u03f5\u03f8"+
		"\u03fc\u0400\u0403\u0406\u040a\u040d\u0410\u0414\u0417\u041a\u041f\u0421"+
		"\u0430\u0436\u043a\u043f\u0443\u0445\u0455\u045f\u0461\u0466\u0469\u046e"+
		"\u0471\u0475";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}