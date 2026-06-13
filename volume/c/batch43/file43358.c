// fichero 43358 -- macros y constantes
#define LIMITE_43358 43458
#define FACTOR_43358 4

int aplicar_limite43358(int valor) {
    if (valor > LIMITE_43358) return LIMITE_43358;
    return valor * FACTOR_43358;
}
