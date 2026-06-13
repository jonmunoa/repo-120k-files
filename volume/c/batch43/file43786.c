// fichero 43786 -- macros y constantes
#define LIMITE_43786 43886
#define FACTOR_43786 2

int aplicar_limite43786(int valor) {
    if (valor > LIMITE_43786) return LIMITE_43786;
    return valor * FACTOR_43786;
}
