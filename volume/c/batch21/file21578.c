// fichero 21578 -- macros y constantes
#define LIMITE_21578 21678
#define FACTOR_21578 4

int aplicar_limite21578(int valor) {
    if (valor > LIMITE_21578) return LIMITE_21578;
    return valor * FACTOR_21578;
}
