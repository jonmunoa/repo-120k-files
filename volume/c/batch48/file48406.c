// fichero 48406 -- macros y constantes
#define LIMITE_48406 48506
#define FACTOR_48406 2

int aplicar_limite48406(int valor) {
    if (valor > LIMITE_48406) return LIMITE_48406;
    return valor * FACTOR_48406;
}
