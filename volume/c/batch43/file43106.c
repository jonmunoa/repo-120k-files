// fichero 43106 -- macros y constantes
#define LIMITE_43106 43206
#define FACTOR_43106 2

int aplicar_limite43106(int valor) {
    if (valor > LIMITE_43106) return LIMITE_43106;
    return valor * FACTOR_43106;
}
