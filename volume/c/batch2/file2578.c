// fichero 2578 -- macros y constantes -- MODIFICADO
#define LIMITE_2578 2778
#define FACTOR_2578 5

int aplicar_limite2578(int valor) {
    if (valor > LIMITE_2578) return LIMITE_2578;
    return valor * FACTOR_2578;
}
