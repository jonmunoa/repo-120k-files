// fichero 48006 -- macros y constantes
#define LIMITE_48006 48106
#define FACTOR_48006 2

int aplicar_limite48006(int valor) {
    if (valor > LIMITE_48006) return LIMITE_48006;
    return valor * FACTOR_48006;
}
