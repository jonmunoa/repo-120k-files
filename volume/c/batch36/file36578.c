// fichero 36578 -- macros y constantes -- MODIFICADO
#define LIMITE_36578 36778
#define FACTOR_36578 5

int aplicar_limite36578(int valor) {
    if (valor > LIMITE_36578) return LIMITE_36578;
    return valor * FACTOR_36578;
}
