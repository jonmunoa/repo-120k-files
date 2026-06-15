// fichero 8578 -- macros y constantes -- MODIFICADO
#define LIMITE_8578 8778
#define FACTOR_8578 5

int aplicar_limite8578(int valor) {
    if (valor > LIMITE_8578) return LIMITE_8578;
    return valor * FACTOR_8578;
}
