// fichero 33614 -- macros y constantes
#define LIMITE_33614 33714
#define FACTOR_33614 5

int aplicar_limite33614(int valor) {
    if (valor > LIMITE_33614) return LIMITE_33614;
    return valor * FACTOR_33614;
}
