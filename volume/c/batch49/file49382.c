// fichero 49382 -- macros y constantes
#define LIMITE_49382 49482
#define FACTOR_49382 3

int aplicar_limite49382(int valor) {
    if (valor > LIMITE_49382) return LIMITE_49382;
    return valor * FACTOR_49382;
}
