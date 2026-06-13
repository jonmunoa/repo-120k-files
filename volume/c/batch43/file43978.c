// fichero 43978 -- macros y constantes
#define LIMITE_43978 44078
#define FACTOR_43978 4

int aplicar_limite43978(int valor) {
    if (valor > LIMITE_43978) return LIMITE_43978;
    return valor * FACTOR_43978;
}
