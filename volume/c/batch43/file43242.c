// fichero 43242 -- macros y constantes
#define LIMITE_43242 43342
#define FACTOR_43242 3

int aplicar_limite43242(int valor) {
    if (valor > LIMITE_43242) return LIMITE_43242;
    return valor * FACTOR_43242;
}
