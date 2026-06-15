// fichero 17578 -- macros y constantes -- MODIFICADO
#define LIMITE_17578 17778
#define FACTOR_17578 5

int aplicar_limite17578(int valor) {
    if (valor > LIMITE_17578) return LIMITE_17578;
    return valor * FACTOR_17578;
}
