// fichero 13578 -- macros y constantes
#define LIMITE_13578 13678
#define FACTOR_13578 4

int aplicar_limite13578(int valor) {
    if (valor > LIMITE_13578) return LIMITE_13578;
    return valor * FACTOR_13578;
}
