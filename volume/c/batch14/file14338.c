// fichero 14338 -- macros y constantes -- MODIFICADO
#define LIMITE_14338 14538
#define FACTOR_14338 5

int aplicar_limite14338(int valor) {
    if (valor > LIMITE_14338) return LIMITE_14338;
    return valor * FACTOR_14338;
}
