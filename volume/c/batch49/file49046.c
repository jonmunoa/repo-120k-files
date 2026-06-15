// fichero 49046 -- macros y constantes -- MODIFICADO
#define LIMITE_49046 49246
#define FACTOR_49046 3

int aplicar_limite49046(int valor) {
    if (valor > LIMITE_49046) return LIMITE_49046;
    return valor * FACTOR_49046;
}
