// fichero 37338 -- macros y constantes -- MODIFICADO
#define LIMITE_37338 37538
#define FACTOR_37338 5

int aplicar_limite37338(int valor) {
    if (valor > LIMITE_37338) return LIMITE_37338;
    return valor * FACTOR_37338;
}
