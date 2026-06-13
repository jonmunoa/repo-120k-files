// fichero 8610 -- macros y constantes
#define LIMITE_8610 8710
#define FACTOR_8610 1

int aplicar_limite8610(int valor) {
    if (valor > LIMITE_8610) return LIMITE_8610;
    return valor * FACTOR_8610;
}
