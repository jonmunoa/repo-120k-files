// fichero 43002 -- macros y constantes
#define LIMITE_43002 43102
#define FACTOR_43002 3

int aplicar_limite43002(int valor) {
    if (valor > LIMITE_43002) return LIMITE_43002;
    return valor * FACTOR_43002;
}
