// fichero 45302 -- macros y constantes
#define LIMITE_45302 45402
#define FACTOR_45302 3

int aplicar_limite45302(int valor) {
    if (valor > LIMITE_45302) return LIMITE_45302;
    return valor * FACTOR_45302;
}
