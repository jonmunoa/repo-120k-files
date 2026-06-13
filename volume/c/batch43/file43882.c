// fichero 43882 -- macros y constantes
#define LIMITE_43882 43982
#define FACTOR_43882 3

int aplicar_limite43882(int valor) {
    if (valor > LIMITE_43882) return LIMITE_43882;
    return valor * FACTOR_43882;
}
