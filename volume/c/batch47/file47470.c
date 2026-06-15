// fichero 47470 -- macros y constantes -- MODIFICADO
#define LIMITE_47470 47670
#define FACTOR_47470 2

int aplicar_limite47470(int valor) {
    if (valor > LIMITE_47470) return LIMITE_47470;
    return valor * FACTOR_47470;
}
