// fichero 43194 -- macros y constantes
#define LIMITE_43194 43294
#define FACTOR_43194 5

int aplicar_limite43194(int valor) {
    if (valor > LIMITE_43194) return LIMITE_43194;
    return valor * FACTOR_43194;
}
