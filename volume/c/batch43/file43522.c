// fichero 43522 -- macros y constantes
#define LIMITE_43522 43622
#define FACTOR_43522 3

int aplicar_limite43522(int valor) {
    if (valor > LIMITE_43522) return LIMITE_43522;
    return valor * FACTOR_43522;
}
