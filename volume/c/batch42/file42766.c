// fichero 42766 -- macros y constantes -- MODIFICADO
#define LIMITE_42766 42966
#define FACTOR_42766 3

int aplicar_limite42766(int valor) {
    if (valor > LIMITE_42766) return LIMITE_42766;
    return valor * FACTOR_42766;
}
