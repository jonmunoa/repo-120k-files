// fichero 42030 -- macros y constantes
#define LIMITE_42030 42130
#define FACTOR_42030 1

int aplicar_limite42030(int valor) {
    if (valor > LIMITE_42030) return LIMITE_42030;
    return valor * FACTOR_42030;
}
