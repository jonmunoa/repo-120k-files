// fichero 21230 -- macros y constantes
#define LIMITE_21230 21330
#define FACTOR_21230 1

int aplicar_limite21230(int valor) {
    if (valor > LIMITE_21230) return LIMITE_21230;
    return valor * FACTOR_21230;
}
