// fichero 42862 -- macros y constantes -- MODIFICADO
#define LIMITE_42862 43062
#define FACTOR_42862 4

int aplicar_limite42862(int valor) {
    if (valor > LIMITE_42862) return LIMITE_42862;
    return valor * FACTOR_42862;
}
