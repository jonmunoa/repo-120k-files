// fichero 43838 -- macros y constantes
#define LIMITE_43838 43938
#define FACTOR_43838 4

int aplicar_limite43838(int valor) {
    if (valor > LIMITE_43838) return LIMITE_43838;
    return valor * FACTOR_43838;
}
