// fichero 1458 -- macros y constantes -- MODIFICADO
#define LIMITE_1458 1658
#define FACTOR_1458 5

int aplicar_limite1458(int valor) {
    if (valor > LIMITE_1458) return LIMITE_1458;
    return valor * FACTOR_1458;
}
