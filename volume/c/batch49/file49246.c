// fichero 49246 -- macros y constantes
#define LIMITE_49246 49346
#define FACTOR_49246 2

int aplicar_limite49246(int valor) {
    if (valor > LIMITE_49246) return LIMITE_49246;
    return valor * FACTOR_49246;
}
