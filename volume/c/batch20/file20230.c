// fichero 20230 -- macros y constantes
#define LIMITE_20230 20330
#define FACTOR_20230 1

int aplicar_limite20230(int valor) {
    if (valor > LIMITE_20230) return LIMITE_20230;
    return valor * FACTOR_20230;
}
