// fichero 21338 -- macros y constantes -- MODIFICADO
#define LIMITE_21338 21538
#define FACTOR_21338 5

int aplicar_limite21338(int valor) {
    if (valor > LIMITE_21338) return LIMITE_21338;
    return valor * FACTOR_21338;
}
