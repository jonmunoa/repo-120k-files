// fichero 39022 -- macros y constantes -- MODIFICADO
#define LIMITE_39022 39222
#define FACTOR_39022 4

int aplicar_limite39022(int valor) {
    if (valor > LIMITE_39022) return LIMITE_39022;
    return valor * FACTOR_39022;
}
