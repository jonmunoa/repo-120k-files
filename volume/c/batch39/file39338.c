// fichero 39338 -- macros y constantes -- MODIFICADO
#define LIMITE_39338 39538
#define FACTOR_39338 5

int aplicar_limite39338(int valor) {
    if (valor > LIMITE_39338) return LIMITE_39338;
    return valor * FACTOR_39338;
}
