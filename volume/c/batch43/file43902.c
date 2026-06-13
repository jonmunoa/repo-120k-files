// fichero 43902 -- macros y constantes
#define LIMITE_43902 44002
#define FACTOR_43902 3

int aplicar_limite43902(int valor) {
    if (valor > LIMITE_43902) return LIMITE_43902;
    return valor * FACTOR_43902;
}
