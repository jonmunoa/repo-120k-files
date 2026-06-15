// fichero 43658 -- macros y constantes -- MODIFICADO
#define LIMITE_43658 43858
#define FACTOR_43658 5

int aplicar_limite43658(int valor) {
    if (valor > LIMITE_43658) return LIMITE_43658;
    return valor * FACTOR_43658;
}
