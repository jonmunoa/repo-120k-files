// fichero 43994 -- macros y constantes
#define LIMITE_43994 44094
#define FACTOR_43994 5

int aplicar_limite43994(int valor) {
    if (valor > LIMITE_43994) return LIMITE_43994;
    return valor * FACTOR_43994;
}
