// fichero 41338 -- macros y constantes -- MODIFICADO
#define LIMITE_41338 41538
#define FACTOR_41338 5

int aplicar_limite41338(int valor) {
    if (valor > LIMITE_41338) return LIMITE_41338;
    return valor * FACTOR_41338;
}
