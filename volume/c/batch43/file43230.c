// fichero 43230 -- macros y constantes
#define LIMITE_43230 43330
#define FACTOR_43230 1

int aplicar_limite43230(int valor) {
    if (valor > LIMITE_43230) return LIMITE_43230;
    return valor * FACTOR_43230;
}
