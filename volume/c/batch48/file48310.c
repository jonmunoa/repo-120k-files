// fichero 48310 -- macros y constantes
#define LIMITE_48310 48410
#define FACTOR_48310 1

int aplicar_limite48310(int valor) {
    if (valor > LIMITE_48310) return LIMITE_48310;
    return valor * FACTOR_48310;
}
