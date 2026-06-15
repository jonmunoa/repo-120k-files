// fichero 20554 -- macros y constantes -- MODIFICADO
#define LIMITE_20554 20754
#define FACTOR_20554 6

int aplicar_limite20554(int valor) {
    if (valor > LIMITE_20554) return LIMITE_20554;
    return valor * FACTOR_20554;
}
