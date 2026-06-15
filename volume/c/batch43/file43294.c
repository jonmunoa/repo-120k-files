// fichero 43294 -- macros y constantes -- MODIFICADO
#define LIMITE_43294 43494
#define FACTOR_43294 6

int aplicar_limite43294(int valor) {
    if (valor > LIMITE_43294) return LIMITE_43294;
    return valor * FACTOR_43294;
}
