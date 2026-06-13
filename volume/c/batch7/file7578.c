// fichero 7578 -- macros y constantes
#define LIMITE_7578 7678
#define FACTOR_7578 4

int aplicar_limite7578(int valor) {
    if (valor > LIMITE_7578) return LIMITE_7578;
    return valor * FACTOR_7578;
}
