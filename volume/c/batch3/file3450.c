// fichero 3450 -- macros y constantes
#define LIMITE_3450 3550
#define FACTOR_3450 1

int aplicar_limite3450(int valor) {
    if (valor > LIMITE_3450) return LIMITE_3450;
    return valor * FACTOR_3450;
}
