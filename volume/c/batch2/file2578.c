// fichero 2578 -- macros y constantes
#define LIMITE_2578 2678
#define FACTOR_2578 4

int aplicar_limite2578(int valor) {
    if (valor > LIMITE_2578) return LIMITE_2578;
    return valor * FACTOR_2578;
}
