// fichero 43778 -- macros y constantes
#define LIMITE_43778 43878
#define FACTOR_43778 4

int aplicar_limite43778(int valor) {
    if (valor > LIMITE_43778) return LIMITE_43778;
    return valor * FACTOR_43778;
}
