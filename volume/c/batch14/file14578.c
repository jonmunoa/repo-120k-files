// fichero 14578 -- macros y constantes -- MODIFICADO
#define LIMITE_14578 14778
#define FACTOR_14578 5

int aplicar_limite14578(int valor) {
    if (valor > LIMITE_14578) return LIMITE_14578;
    return valor * FACTOR_14578;
}
