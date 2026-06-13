// fichero 43790 -- macros y constantes
#define LIMITE_43790 43890
#define FACTOR_43790 1

int aplicar_limite43790(int valor) {
    if (valor > LIMITE_43790) return LIMITE_43790;
    return valor * FACTOR_43790;
}
