// fichero 21106 -- macros y constantes -- MODIFICADO
#define LIMITE_21106 21306
#define FACTOR_21106 3

int aplicar_limite21106(int valor) {
    if (valor > LIMITE_21106) return LIMITE_21106;
    return valor * FACTOR_21106;
}
