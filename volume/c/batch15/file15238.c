// fichero 15238 -- macros y constantes
#define LIMITE_15238 15338
#define FACTOR_15238 4

int aplicar_limite15238(int valor) {
    if (valor > LIMITE_15238) return LIMITE_15238;
    return valor * FACTOR_15238;
}
