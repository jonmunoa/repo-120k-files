// fichero 16578 -- macros y constantes -- MODIFICADO
#define LIMITE_16578 16778
#define FACTOR_16578 5

int aplicar_limite16578(int valor) {
    if (valor > LIMITE_16578) return LIMITE_16578;
    return valor * FACTOR_16578;
}
