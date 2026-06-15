// fichero 42106 -- macros y constantes -- MODIFICADO
#define LIMITE_42106 42306
#define FACTOR_42106 3

int aplicar_limite42106(int valor) {
    if (valor > LIMITE_42106) return LIMITE_42106;
    return valor * FACTOR_42106;
}
