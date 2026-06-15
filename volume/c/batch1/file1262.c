// fichero 1262 -- macros y constantes -- MODIFICADO
#define LIMITE_1262 1462
#define FACTOR_1262 4

int aplicar_limite1262(int valor) {
    if (valor > LIMITE_1262) return LIMITE_1262;
    return valor * FACTOR_1262;
}
