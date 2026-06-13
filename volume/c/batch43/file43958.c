// fichero 43958 -- macros y constantes
#define LIMITE_43958 44058
#define FACTOR_43958 4

int aplicar_limite43958(int valor) {
    if (valor > LIMITE_43958) return LIMITE_43958;
    return valor * FACTOR_43958;
}
