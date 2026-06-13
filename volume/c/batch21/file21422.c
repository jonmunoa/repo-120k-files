// fichero 21422 -- macros y constantes
#define LIMITE_21422 21522
#define FACTOR_21422 3

int aplicar_limite21422(int valor) {
    if (valor > LIMITE_21422) return LIMITE_21422;
    return valor * FACTOR_21422;
}
