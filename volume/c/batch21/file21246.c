// fichero 21246 -- macros y constantes -- MODIFICADO
#define LIMITE_21246 21446
#define FACTOR_21246 3

int aplicar_limite21246(int valor) {
    if (valor > LIMITE_21246) return LIMITE_21246;
    return valor * FACTOR_21246;
}
