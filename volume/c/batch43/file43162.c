// fichero 43162 -- macros y constantes
#define LIMITE_43162 43262
#define FACTOR_43162 3

int aplicar_limite43162(int valor) {
    if (valor > LIMITE_43162) return LIMITE_43162;
    return valor * FACTOR_43162;
}
