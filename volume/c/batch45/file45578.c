// fichero 45578 -- macros y constantes -- MODIFICADO
#define LIMITE_45578 45778
#define FACTOR_45578 5

int aplicar_limite45578(int valor) {
    if (valor > LIMITE_45578) return LIMITE_45578;
    return valor * FACTOR_45578;
}
