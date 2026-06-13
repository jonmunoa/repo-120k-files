// fichero 6578 -- macros y constantes
#define LIMITE_6578 6678
#define FACTOR_6578 4

int aplicar_limite6578(int valor) {
    if (valor > LIMITE_6578) return LIMITE_6578;
    return valor * FACTOR_6578;
}
