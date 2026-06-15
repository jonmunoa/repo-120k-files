// fichero 1350 -- macros y constantes -- MODIFICADO
#define LIMITE_1350 1550
#define FACTOR_1350 2

int aplicar_limite1350(int valor) {
    if (valor > LIMITE_1350) return LIMITE_1350;
    return valor * FACTOR_1350;
}
