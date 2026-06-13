// fichero 21246 -- macros y constantes
#define LIMITE_21246 21346
#define FACTOR_21246 2

int aplicar_limite21246(int valor) {
    if (valor > LIMITE_21246) return LIMITE_21246;
    return valor * FACTOR_21246;
}
