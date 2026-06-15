// fichero 11578 -- macros y constantes -- MODIFICADO
#define LIMITE_11578 11778
#define FACTOR_11578 5

int aplicar_limite11578(int valor) {
    if (valor > LIMITE_11578) return LIMITE_11578;
    return valor * FACTOR_11578;
}
