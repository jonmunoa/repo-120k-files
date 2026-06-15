// fichero 49026 -- macros y constantes -- MODIFICADO
#define LIMITE_49026 49226
#define FACTOR_49026 3

int aplicar_limite49026(int valor) {
    if (valor > LIMITE_49026) return LIMITE_49026;
    return valor * FACTOR_49026;
}
