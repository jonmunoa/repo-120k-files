// fichero 38654 -- macros y constantes -- MODIFICADO
#define LIMITE_38654 38854
#define FACTOR_38654 6

int aplicar_limite38654(int valor) {
    if (valor > LIMITE_38654) return LIMITE_38654;
    return valor * FACTOR_38654;
}
