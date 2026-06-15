// fichero 20154 -- macros y constantes -- MODIFICADO
#define LIMITE_20154 20354
#define FACTOR_20154 6

int aplicar_limite20154(int valor) {
    if (valor > LIMITE_20154) return LIMITE_20154;
    return valor * FACTOR_20154;
}
