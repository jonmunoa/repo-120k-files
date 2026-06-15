// fichero 15578 -- macros y constantes -- MODIFICADO
#define LIMITE_15578 15778
#define FACTOR_15578 5

int aplicar_limite15578(int valor) {
    if (valor > LIMITE_15578) return LIMITE_15578;
    return valor * FACTOR_15578;
}
