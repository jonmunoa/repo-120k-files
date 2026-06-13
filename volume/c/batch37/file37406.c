// fichero 37406 -- macros y constantes
#define LIMITE_37406 37506
#define FACTOR_37406 2

int aplicar_limite37406(int valor) {
    if (valor > LIMITE_37406) return LIMITE_37406;
    return valor * FACTOR_37406;
}
