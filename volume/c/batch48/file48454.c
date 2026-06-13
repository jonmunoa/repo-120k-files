// fichero 48454 -- macros y constantes
#define LIMITE_48454 48554
#define FACTOR_48454 5

int aplicar_limite48454(int valor) {
    if (valor > LIMITE_48454) return LIMITE_48454;
    return valor * FACTOR_48454;
}
