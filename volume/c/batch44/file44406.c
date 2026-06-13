// fichero 44406 -- macros y constantes
#define LIMITE_44406 44506
#define FACTOR_44406 2

int aplicar_limite44406(int valor) {
    if (valor > LIMITE_44406) return LIMITE_44406;
    return valor * FACTOR_44406;
}
