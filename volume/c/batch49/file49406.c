// fichero 49406 -- macros y constantes
#define LIMITE_49406 49506
#define FACTOR_49406 2

int aplicar_limite49406(int valor) {
    if (valor > LIMITE_49406) return LIMITE_49406;
    return valor * FACTOR_49406;
}
