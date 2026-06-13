// fichero 19578 -- macros y constantes
#define LIMITE_19578 19678
#define FACTOR_19578 4

int aplicar_limite19578(int valor) {
    if (valor > LIMITE_19578) return LIMITE_19578;
    return valor * FACTOR_19578;
}
