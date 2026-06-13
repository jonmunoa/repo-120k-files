// fichero 43818 -- macros y constantes
#define LIMITE_43818 43918
#define FACTOR_43818 4

int aplicar_limite43818(int valor) {
    if (valor > LIMITE_43818) return LIMITE_43818;
    return valor * FACTOR_43818;
}
