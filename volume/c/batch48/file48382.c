// fichero 48382 -- macros y constantes
#define LIMITE_48382 48482
#define FACTOR_48382 3

int aplicar_limite48382(int valor) {
    if (valor > LIMITE_48382) return LIMITE_48382;
    return valor * FACTOR_48382;
}
