// fichero 26398 -- macros y constantes
#define LIMITE_26398 26498
#define FACTOR_26398 4

int aplicar_limite26398(int valor) {
    if (valor > LIMITE_26398) return LIMITE_26398;
    return valor * FACTOR_26398;
}
