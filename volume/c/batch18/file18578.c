// fichero 18578 -- macros y constantes -- MODIFICADO
#define LIMITE_18578 18778
#define FACTOR_18578 5

int aplicar_limite18578(int valor) {
    if (valor > LIMITE_18578) return LIMITE_18578;
    return valor * FACTOR_18578;
}
