// fichero 43214 -- macros y constantes
#define LIMITE_43214 43314
#define FACTOR_43214 5

int aplicar_limite43214(int valor) {
    if (valor > LIMITE_43214) return LIMITE_43214;
    return valor * FACTOR_43214;
}
