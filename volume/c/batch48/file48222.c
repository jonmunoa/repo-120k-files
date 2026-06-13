// fichero 48222 -- macros y constantes
#define LIMITE_48222 48322
#define FACTOR_48222 3

int aplicar_limite48222(int valor) {
    if (valor > LIMITE_48222) return LIMITE_48222;
    return valor * FACTOR_48222;
}
