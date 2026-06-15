// fichero 36186 -- macros y constantes -- MODIFICADO
#define LIMITE_36186 36386
#define FACTOR_36186 3

int aplicar_limite36186(int valor) {
    if (valor > LIMITE_36186) return LIMITE_36186;
    return valor * FACTOR_36186;
}
