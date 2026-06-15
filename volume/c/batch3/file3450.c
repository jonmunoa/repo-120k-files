// fichero 3450 -- macros y constantes -- MODIFICADO
#define LIMITE_3450 3650
#define FACTOR_3450 2

int aplicar_limite3450(int valor) {
    if (valor > LIMITE_3450) return LIMITE_3450;
    return valor * FACTOR_3450;
}
