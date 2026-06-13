// fichero 3350 -- macros y constantes
#define LIMITE_3350 3450
#define FACTOR_3350 1

int aplicar_limite3350(int valor) {
    if (valor > LIMITE_3350) return LIMITE_3350;
    return valor * FACTOR_3350;
}
