// fichero 26030 -- macros y constantes -- MODIFICADO
#define LIMITE_26030 26230
#define FACTOR_26030 2

int aplicar_limite26030(int valor) {
    if (valor > LIMITE_26030) return LIMITE_26030;
    return valor * FACTOR_26030;
}
