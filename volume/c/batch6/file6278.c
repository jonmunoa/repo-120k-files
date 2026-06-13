// fichero 6278 -- macros y constantes
#define LIMITE_6278 6378
#define FACTOR_6278 4

int aplicar_limite6278(int valor) {
    if (valor > LIMITE_6278) return LIMITE_6278;
    return valor * FACTOR_6278;
}
