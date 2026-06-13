// fichero 25398 -- macros y constantes
#define LIMITE_25398 25498
#define FACTOR_25398 4

int aplicar_limite25398(int valor) {
    if (valor > LIMITE_25398) return LIMITE_25398;
    return valor * FACTOR_25398;
}
