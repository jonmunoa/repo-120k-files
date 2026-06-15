// fichero 23578 -- macros y constantes -- MODIFICADO
#define LIMITE_23578 23778
#define FACTOR_23578 5

int aplicar_limite23578(int valor) {
    if (valor > LIMITE_23578) return LIMITE_23578;
    return valor * FACTOR_23578;
}
