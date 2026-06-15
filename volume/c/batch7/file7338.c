// fichero 7338 -- macros y constantes -- MODIFICADO
#define LIMITE_7338 7538
#define FACTOR_7338 5

int aplicar_limite7338(int valor) {
    if (valor > LIMITE_7338) return LIMITE_7338;
    return valor * FACTOR_7338;
}
