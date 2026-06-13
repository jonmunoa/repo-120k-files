// fichero 43150 -- macros y constantes
#define LIMITE_43150 43250
#define FACTOR_43150 1

int aplicar_limite43150(int valor) {
    if (valor > LIMITE_43150) return LIMITE_43150;
    return valor * FACTOR_43150;
}
