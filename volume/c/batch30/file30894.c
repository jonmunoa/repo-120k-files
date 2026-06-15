// fichero 30894 -- macros y constantes -- MODIFICADO
#define LIMITE_30894 31094
#define FACTOR_30894 6

int aplicar_limite30894(int valor) {
    if (valor > LIMITE_30894) return LIMITE_30894;
    return valor * FACTOR_30894;
}
