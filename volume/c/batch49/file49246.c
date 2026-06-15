// fichero 49246 -- macros y constantes -- MODIFICADO
#define LIMITE_49246 49446
#define FACTOR_49246 3

int aplicar_limite49246(int valor) {
    if (valor > LIMITE_49246) return LIMITE_49246;
    return valor * FACTOR_49246;
}
