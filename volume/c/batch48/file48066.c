// fichero 48066 -- macros y constantes
#define LIMITE_48066 48166
#define FACTOR_48066 2

int aplicar_limite48066(int valor) {
    if (valor > LIMITE_48066) return LIMITE_48066;
    return valor * FACTOR_48066;
}
