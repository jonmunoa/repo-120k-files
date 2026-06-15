// fichero 37046 -- macros y constantes -- MODIFICADO
#define LIMITE_37046 37246
#define FACTOR_37046 3

int aplicar_limite37046(int valor) {
    if (valor > LIMITE_37046) return LIMITE_37046;
    return valor * FACTOR_37046;
}
