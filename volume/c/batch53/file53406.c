// fichero 53406 -- macros y constantes
#define LIMITE_53406 53506
#define FACTOR_53406 2

int aplicar_limite53406(int valor) {
    if (valor > LIMITE_53406) return LIMITE_53406;
    return valor * FACTOR_53406;
}
