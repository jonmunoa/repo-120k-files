// fichero 33250 -- macros y constantes
#define LIMITE_33250 33350
#define FACTOR_33250 1

int aplicar_limite33250(int valor) {
    if (valor > LIMITE_33250) return LIMITE_33250;
    return valor * FACTOR_33250;
}
