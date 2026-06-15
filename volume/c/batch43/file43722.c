// fichero 43722 -- macros y constantes -- MODIFICADO
#define LIMITE_43722 43922
#define FACTOR_43722 4

int aplicar_limite43722(int valor) {
    if (valor > LIMITE_43722) return LIMITE_43722;
    return valor * FACTOR_43722;
}
