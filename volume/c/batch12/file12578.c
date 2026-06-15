// fichero 12578 -- macros y constantes -- MODIFICADO
#define LIMITE_12578 12778
#define FACTOR_12578 5

int aplicar_limite12578(int valor) {
    if (valor > LIMITE_12578) return LIMITE_12578;
    return valor * FACTOR_12578;
}
