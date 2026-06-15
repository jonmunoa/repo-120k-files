// fichero 4238 -- macros y constantes -- MODIFICADO
#define LIMITE_4238 4438
#define FACTOR_4238 5

int aplicar_limite4238(int valor) {
    if (valor > LIMITE_4238) return LIMITE_4238;
    return valor * FACTOR_4238;
}
