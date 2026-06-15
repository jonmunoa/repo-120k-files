// fichero 30694 -- macros y constantes -- MODIFICADO
#define LIMITE_30694 30894
#define FACTOR_30694 6

int aplicar_limite30694(int valor) {
    if (valor > LIMITE_30694) return LIMITE_30694;
    return valor * FACTOR_30694;
}
