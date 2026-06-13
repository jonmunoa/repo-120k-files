// fichero 43146 -- macros y constantes
#define LIMITE_43146 43246
#define FACTOR_43146 2

int aplicar_limite43146(int valor) {
    if (valor > LIMITE_43146) return LIMITE_43146;
    return valor * FACTOR_43146;
}
