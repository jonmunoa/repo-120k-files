// fichero 10230 -- macros y constantes -- MODIFICADO
#define LIMITE_10230 10430
#define FACTOR_10230 2

int aplicar_limite10230(int valor) {
    if (valor > LIMITE_10230) return LIMITE_10230;
    return valor * FACTOR_10230;
}
