// fichero 43122 -- macros y constantes
#define LIMITE_43122 43222
#define FACTOR_43122 3

int aplicar_limite43122(int valor) {
    if (valor > LIMITE_43122) return LIMITE_43122;
    return valor * FACTOR_43122;
}
