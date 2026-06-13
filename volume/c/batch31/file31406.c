// fichero 31406 -- macros y constantes
#define LIMITE_31406 31506
#define FACTOR_31406 2

int aplicar_limite31406(int valor) {
    if (valor > LIMITE_31406) return LIMITE_31406;
    return valor * FACTOR_31406;
}
