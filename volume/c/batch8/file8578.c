// fichero 8578 -- macros y constantes
#define LIMITE_8578 8678
#define FACTOR_8578 4

int aplicar_limite8578(int valor) {
    if (valor > LIMITE_8578) return LIMITE_8578;
    return valor * FACTOR_8578;
}
