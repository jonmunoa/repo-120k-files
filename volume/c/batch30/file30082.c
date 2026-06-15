// fichero 30082 -- macros y constantes -- MODIFICADO
#define LIMITE_30082 30282
#define FACTOR_30082 4

int aplicar_limite30082(int valor) {
    if (valor > LIMITE_30082) return LIMITE_30082;
    return valor * FACTOR_30082;
}
