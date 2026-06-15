// fichero 38554 -- macros y constantes -- MODIFICADO
#define LIMITE_38554 38754
#define FACTOR_38554 6

int aplicar_limite38554(int valor) {
    if (valor > LIMITE_38554) return LIMITE_38554;
    return valor * FACTOR_38554;
}
