// fichero 36542 -- macros y constantes -- MODIFICADO
#define LIMITE_36542 36742
#define FACTOR_36542 4

int aplicar_limite36542(int valor) {
    if (valor > LIMITE_36542) return LIMITE_36542;
    return valor * FACTOR_36542;
}
