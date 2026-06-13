// fichero 43210 -- macros y constantes
#define LIMITE_43210 43310
#define FACTOR_43210 1

int aplicar_limite43210(int valor) {
    if (valor > LIMITE_43210) return LIMITE_43210;
    return valor * FACTOR_43210;
}
