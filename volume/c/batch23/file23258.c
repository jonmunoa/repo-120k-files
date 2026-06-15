// fichero 23258 -- macros y constantes -- MODIFICADO
#define LIMITE_23258 23458
#define FACTOR_23258 5

int aplicar_limite23258(int valor) {
    if (valor > LIMITE_23258) return LIMITE_23258;
    return valor * FACTOR_23258;
}
