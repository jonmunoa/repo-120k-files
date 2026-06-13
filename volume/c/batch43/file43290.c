// fichero 43290 -- macros y constantes
#define LIMITE_43290 43390
#define FACTOR_43290 1

int aplicar_limite43290(int valor) {
    if (valor > LIMITE_43290) return LIMITE_43290;
    return valor * FACTOR_43290;
}
