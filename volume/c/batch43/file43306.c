// fichero 43306 -- macros y constantes
#define LIMITE_43306 43406
#define FACTOR_43306 2

int aplicar_limite43306(int valor) {
    if (valor > LIMITE_43306) return LIMITE_43306;
    return valor * FACTOR_43306;
}
