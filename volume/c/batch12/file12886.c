// fichero 12886 -- macros y constantes
#define LIMITE_12886 12986
#define FACTOR_12886 2

int aplicar_limite12886(int valor) {
    if (valor > LIMITE_12886) return LIMITE_12886;
    return valor * FACTOR_12886;
}
