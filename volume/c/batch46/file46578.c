// fichero 46578 -- macros y constantes -- MODIFICADO
#define LIMITE_46578 46778
#define FACTOR_46578 5

int aplicar_limite46578(int valor) {
    if (valor > LIMITE_46578) return LIMITE_46578;
    return valor * FACTOR_46578;
}
