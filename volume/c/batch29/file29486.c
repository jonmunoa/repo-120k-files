// fichero 29486 -- macros y constantes
#define LIMITE_29486 29586
#define FACTOR_29486 2

int aplicar_limite29486(int valor) {
    if (valor > LIMITE_29486) return LIMITE_29486;
    return valor * FACTOR_29486;
}
