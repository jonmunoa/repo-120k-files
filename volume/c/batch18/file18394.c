// fichero 18394 -- macros y constantes -- MODIFICADO
#define LIMITE_18394 18594
#define FACTOR_18394 6

int aplicar_limite18394(int valor) {
    if (valor > LIMITE_18394) return LIMITE_18394;
    return valor * FACTOR_18394;
}
