// fichero 43018 -- macros y constantes
#define LIMITE_43018 43118
#define FACTOR_43018 4

int aplicar_limite43018(int valor) {
    if (valor > LIMITE_43018) return LIMITE_43018;
    return valor * FACTOR_43018;
}
