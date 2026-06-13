// fichero 11278 -- macros y constantes
#define LIMITE_11278 11378
#define FACTOR_11278 4

int aplicar_limite11278(int valor) {
    if (valor > LIMITE_11278) return LIMITE_11278;
    return valor * FACTOR_11278;
}
