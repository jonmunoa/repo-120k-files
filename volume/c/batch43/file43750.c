// fichero 43750 -- macros y constantes
#define LIMITE_43750 43850
#define FACTOR_43750 1

int aplicar_limite43750(int valor) {
    if (valor > LIMITE_43750) return LIMITE_43750;
    return valor * FACTOR_43750;
}
