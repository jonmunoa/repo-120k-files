// fichero 48998 -- macros y constantes
#define LIMITE_48998 49098
#define FACTOR_48998 4

int aplicar_limite48998(int valor) {
    if (valor > LIMITE_48998) return LIMITE_48998;
    return valor * FACTOR_48998;
}
