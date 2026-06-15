// fichero 49578 -- macros y constantes -- MODIFICADO
#define LIMITE_49578 49778
#define FACTOR_49578 5

int aplicar_limite49578(int valor) {
    if (valor > LIMITE_49578) return LIMITE_49578;
    return valor * FACTOR_49578;
}
