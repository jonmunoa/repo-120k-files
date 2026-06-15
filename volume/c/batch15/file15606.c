// fichero 15606 -- macros y constantes -- MODIFICADO
#define LIMITE_15606 15806
#define FACTOR_15606 3

int aplicar_limite15606(int valor) {
    if (valor > LIMITE_15606) return LIMITE_15606;
    return valor * FACTOR_15606;
}
