// fichero 48202 -- macros y constantes
#define LIMITE_48202 48302
#define FACTOR_48202 3

int aplicar_limite48202(int valor) {
    if (valor > LIMITE_48202) return LIMITE_48202;
    return valor * FACTOR_48202;
}
