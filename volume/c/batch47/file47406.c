// fichero 47406 -- macros y constantes
#define LIMITE_47406 47506
#define FACTOR_47406 2

int aplicar_limite47406(int valor) {
    if (valor > LIMITE_47406) return LIMITE_47406;
    return valor * FACTOR_47406;
}
