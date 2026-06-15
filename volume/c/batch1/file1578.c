// fichero 1578 -- macros y constantes -- MODIFICADO
#define LIMITE_1578 1778
#define FACTOR_1578 5

int aplicar_limite1578(int valor) {
    if (valor > LIMITE_1578) return LIMITE_1578;
    return valor * FACTOR_1578;
}
