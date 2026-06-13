// fichero 45422 -- macros y constantes
#define LIMITE_45422 45522
#define FACTOR_45422 3

int aplicar_limite45422(int valor) {
    if (valor > LIMITE_45422) return LIMITE_45422;
    return valor * FACTOR_45422;
}
