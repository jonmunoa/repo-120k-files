// fichero 18030 -- macros y constantes
#define LIMITE_18030 18130
#define FACTOR_18030 1

int aplicar_limite18030(int valor) {
    if (valor > LIMITE_18030) return LIMITE_18030;
    return valor * FACTOR_18030;
}
