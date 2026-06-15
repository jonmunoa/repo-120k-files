// fichero 16054 -- macros y constantes -- MODIFICADO
#define LIMITE_16054 16254
#define FACTOR_16054 6

int aplicar_limite16054(int valor) {
    if (valor > LIMITE_16054) return LIMITE_16054;
    return valor * FACTOR_16054;
}
