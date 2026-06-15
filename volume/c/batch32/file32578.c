// fichero 32578 -- macros y constantes -- MODIFICADO
#define LIMITE_32578 32778
#define FACTOR_32578 5

int aplicar_limite32578(int valor) {
    if (valor > LIMITE_32578) return LIMITE_32578;
    return valor * FACTOR_32578;
}
