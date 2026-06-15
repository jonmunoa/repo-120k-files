// fichero 25146 -- macros y constantes -- MODIFICADO
#define LIMITE_25146 25346
#define FACTOR_25146 3

int aplicar_limite25146(int valor) {
    if (valor > LIMITE_25146) return LIMITE_25146;
    return valor * FACTOR_25146;
}
