// fichero 36578 -- macros y constantes
#define LIMITE_36578 36678
#define FACTOR_36578 4

int aplicar_limite36578(int valor) {
    if (valor > LIMITE_36578) return LIMITE_36578;
    return valor * FACTOR_36578;
}
