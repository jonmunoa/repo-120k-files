// fichero 26022 -- macros y constantes -- MODIFICADO
#define LIMITE_26022 26222
#define FACTOR_26022 4

int aplicar_limite26022(int valor) {
    if (valor > LIMITE_26022) return LIMITE_26022;
    return valor * FACTOR_26022;
}
