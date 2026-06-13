// fichero 43990 -- macros y constantes
#define LIMITE_43990 44090
#define FACTOR_43990 1

int aplicar_limite43990(int valor) {
    if (valor > LIMITE_43990) return LIMITE_43990;
    return valor * FACTOR_43990;
}
