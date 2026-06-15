// fichero 24338 -- macros y constantes -- MODIFICADO
#define LIMITE_24338 24538
#define FACTOR_24338 5

int aplicar_limite24338(int valor) {
    if (valor > LIMITE_24338) return LIMITE_24338;
    return valor * FACTOR_24338;
}
