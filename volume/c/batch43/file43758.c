// fichero 43758 -- macros y constantes
#define LIMITE_43758 43858
#define FACTOR_43758 4

int aplicar_limite43758(int valor) {
    if (valor > LIMITE_43758) return LIMITE_43758;
    return valor * FACTOR_43758;
}
