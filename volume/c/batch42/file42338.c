// fichero 42338 -- macros y constantes -- MODIFICADO
#define LIMITE_42338 42538
#define FACTOR_42338 5

int aplicar_limite42338(int valor) {
    if (valor > LIMITE_42338) return LIMITE_42338;
    return valor * FACTOR_42338;
}
