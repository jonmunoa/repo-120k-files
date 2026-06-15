// fichero 4026 -- macros y constantes -- MODIFICADO
#define LIMITE_4026 4226
#define FACTOR_4026 3

int aplicar_limite4026(int valor) {
    if (valor > LIMITE_4026) return LIMITE_4026;
    return valor * FACTOR_4026;
}
