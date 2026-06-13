// fichero 44522 -- macros y constantes
#define LIMITE_44522 44622
#define FACTOR_44522 3

int aplicar_limite44522(int valor) {
    if (valor > LIMITE_44522) return LIMITE_44522;
    return valor * FACTOR_44522;
}
