// fichero 34382 -- macros y constantes
#define LIMITE_34382 34482
#define FACTOR_34382 3

int aplicar_limite34382(int valor) {
    if (valor > LIMITE_34382) return LIMITE_34382;
    return valor * FACTOR_34382;
}
