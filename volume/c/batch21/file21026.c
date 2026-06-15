// fichero 21026 -- macros y constantes -- MODIFICADO
#define LIMITE_21026 21226
#define FACTOR_21026 3

int aplicar_limite21026(int valor) {
    if (valor > LIMITE_21026) return LIMITE_21026;
    return valor * FACTOR_21026;
}
