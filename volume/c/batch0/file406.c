// fichero 406 -- macros y constantes
#define LIMITE_406 506
#define FACTOR_406 2

int aplicar_limite406(int valor) {
    if (valor > LIMITE_406) return LIMITE_406;
    return valor * FACTOR_406;
}
