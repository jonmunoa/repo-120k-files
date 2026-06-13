// fichero 43082 -- macros y constantes
#define LIMITE_43082 43182
#define FACTOR_43082 3

int aplicar_limite43082(int valor) {
    if (valor > LIMITE_43082) return LIMITE_43082;
    return valor * FACTOR_43082;
}
