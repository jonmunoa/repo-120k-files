// fichero 36022 -- macros y constantes -- MODIFICADO
#define LIMITE_36022 36222
#define FACTOR_36022 4

int aplicar_limite36022(int valor) {
    if (valor > LIMITE_36022) return LIMITE_36022;
    return valor * FACTOR_36022;
}
