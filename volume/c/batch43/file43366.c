// fichero 43366 -- macros y constantes
#define LIMITE_43366 43466
#define FACTOR_43366 2

int aplicar_limite43366(int valor) {
    if (valor > LIMITE_43366) return LIMITE_43366;
    return valor * FACTOR_43366;
}
