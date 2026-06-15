// fichero 33026 -- macros y constantes -- MODIFICADO
#define LIMITE_33026 33226
#define FACTOR_33026 3

int aplicar_limite33026(int valor) {
    if (valor > LIMITE_33026) return LIMITE_33026;
    return valor * FACTOR_33026;
}
