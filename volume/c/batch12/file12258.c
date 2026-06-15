// fichero 12258 -- macros y constantes -- MODIFICADO
#define LIMITE_12258 12458
#define FACTOR_12258 5

int aplicar_limite12258(int valor) {
    if (valor > LIMITE_12258) return LIMITE_12258;
    return valor * FACTOR_12258;
}
