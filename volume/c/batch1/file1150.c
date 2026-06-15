// fichero 1150 -- macros y constantes -- MODIFICADO
#define LIMITE_1150 1350
#define FACTOR_1150 2

int aplicar_limite1150(int valor) {
    if (valor > LIMITE_1150) return LIMITE_1150;
    return valor * FACTOR_1150;
}
