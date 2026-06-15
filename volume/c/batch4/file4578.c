// fichero 4578 -- macros y constantes -- MODIFICADO
#define LIMITE_4578 4778
#define FACTOR_4578 5

int aplicar_limite4578(int valor) {
    if (valor > LIMITE_4578) return LIMITE_4578;
    return valor * FACTOR_4578;
}
