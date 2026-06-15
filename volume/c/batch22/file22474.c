// fichero 22474 -- macros y constantes -- MODIFICADO
#define LIMITE_22474 22674
#define FACTOR_22474 6

int aplicar_limite22474(int valor) {
    if (valor > LIMITE_22474) return LIMITE_22474;
    return valor * FACTOR_22474;
}
