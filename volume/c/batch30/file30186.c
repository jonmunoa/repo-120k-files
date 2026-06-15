// fichero 30186 -- macros y constantes -- MODIFICADO
#define LIMITE_30186 30386
#define FACTOR_30186 3

int aplicar_limite30186(int valor) {
    if (valor > LIMITE_30186) return LIMITE_30186;
    return valor * FACTOR_30186;
}
