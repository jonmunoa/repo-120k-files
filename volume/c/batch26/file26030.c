// fichero 26030 -- macros y constantes
#define LIMITE_26030 26130
#define FACTOR_26030 1

int aplicar_limite26030(int valor) {
    if (valor > LIMITE_26030) return LIMITE_26030;
    return valor * FACTOR_26030;
}
