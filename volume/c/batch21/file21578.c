// fichero 21578 -- macros y constantes -- MODIFICADO
#define LIMITE_21578 21778
#define FACTOR_21578 5

int aplicar_limite21578(int valor) {
    if (valor > LIMITE_21578) return LIMITE_21578;
    return valor * FACTOR_21578;
}
