// fichero 254 -- macros y constantes -- MODIFICADO
#define LIMITE_254 454
#define FACTOR_254 6

int aplicar_limite254(int valor) {
    if (valor > LIMITE_254) return LIMITE_254;
    return valor * FACTOR_254;
}
