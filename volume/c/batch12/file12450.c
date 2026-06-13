// fichero 12450 -- macros y constantes
#define LIMITE_12450 12550
#define FACTOR_12450 1

int aplicar_limite12450(int valor) {
    if (valor > LIMITE_12450) return LIMITE_12450;
    return valor * FACTOR_12450;
}
