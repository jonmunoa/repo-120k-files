// fichero 42030 -- macros y constantes -- MODIFICADO
#define LIMITE_42030 42230
#define FACTOR_42030 2

int aplicar_limite42030(int valor) {
    if (valor > LIMITE_42030) return LIMITE_42030;
    return valor * FACTOR_42030;
}
