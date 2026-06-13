// fichero 43250 -- macros y constantes
#define LIMITE_43250 43350
#define FACTOR_43250 1

int aplicar_limite43250(int valor) {
    if (valor > LIMITE_43250) return LIMITE_43250;
    return valor * FACTOR_43250;
}
