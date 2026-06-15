// fichero 22578 -- macros y constantes -- MODIFICADO
#define LIMITE_22578 22778
#define FACTOR_22578 5

int aplicar_limite22578(int valor) {
    if (valor > LIMITE_22578) return LIMITE_22578;
    return valor * FACTOR_22578;
}
