// fichero 32046 -- macros y constantes -- MODIFICADO
#define LIMITE_32046 32246
#define FACTOR_32046 3

int aplicar_limite32046(int valor) {
    if (valor > LIMITE_32046) return LIMITE_32046;
    return valor * FACTOR_32046;
}
