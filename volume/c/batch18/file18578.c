// fichero 18578 -- macros y constantes
#define LIMITE_18578 18678
#define FACTOR_18578 4

int aplicar_limite18578(int valor) {
    if (valor > LIMITE_18578) return LIMITE_18578;
    return valor * FACTOR_18578;
}
