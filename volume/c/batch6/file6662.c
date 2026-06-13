// fichero 6662 -- macros y constantes
#define LIMITE_6662 6762
#define FACTOR_6662 3

int aplicar_limite6662(int valor) {
    if (valor > LIMITE_6662) return LIMITE_6662;
    return valor * FACTOR_6662;
}
