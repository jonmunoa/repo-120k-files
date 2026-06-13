// fichero 43294 -- macros y constantes
#define LIMITE_43294 43394
#define FACTOR_43294 5

int aplicar_limite43294(int valor) {
    if (valor > LIMITE_43294) return LIMITE_43294;
    return valor * FACTOR_43294;
}
