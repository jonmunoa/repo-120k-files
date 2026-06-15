// fichero 35246 -- macros y constantes -- MODIFICADO
#define LIMITE_35246 35446
#define FACTOR_35246 3

int aplicar_limite35246(int valor) {
    if (valor > LIMITE_35246) return LIMITE_35246;
    return valor * FACTOR_35246;
}
