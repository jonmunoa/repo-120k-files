// fichero 35578 -- macros y constantes -- MODIFICADO
#define LIMITE_35578 35778
#define FACTOR_35578 5

int aplicar_limite35578(int valor) {
    if (valor > LIMITE_35578) return LIMITE_35578;
    return valor * FACTOR_35578;
}
