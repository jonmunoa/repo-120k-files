// fichero 30246 -- macros y constantes -- MODIFICADO
#define LIMITE_30246 30446
#define FACTOR_30246 3

int aplicar_limite30246(int valor) {
    if (valor > LIMITE_30246) return LIMITE_30246;
    return valor * FACTOR_30246;
}
