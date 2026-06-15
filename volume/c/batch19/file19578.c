// fichero 19578 -- macros y constantes -- MODIFICADO
#define LIMITE_19578 19778
#define FACTOR_19578 5

int aplicar_limite19578(int valor) {
    if (valor > LIMITE_19578) return LIMITE_19578;
    return valor * FACTOR_19578;
}
