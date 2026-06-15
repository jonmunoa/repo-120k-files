// fichero 39578 -- macros y constantes -- MODIFICADO
#define LIMITE_39578 39778
#define FACTOR_39578 5

int aplicar_limite39578(int valor) {
    if (valor > LIMITE_39578) return LIMITE_39578;
    return valor * FACTOR_39578;
}
