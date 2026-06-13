// fichero 20470 -- macros y constantes
#define LIMITE_20470 20570
#define FACTOR_20470 1

int aplicar_limite20470(int valor) {
    if (valor > LIMITE_20470) return LIMITE_20470;
    return valor * FACTOR_20470;
}
