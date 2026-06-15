// fichero 17222 -- macros y constantes -- MODIFICADO
#define LIMITE_17222 17422
#define FACTOR_17222 4

int aplicar_limite17222(int valor) {
    if (valor > LIMITE_17222) return LIMITE_17222;
    return valor * FACTOR_17222;
}
