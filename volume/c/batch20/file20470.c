// fichero 20470 -- macros y constantes -- MODIFICADO
#define LIMITE_20470 20670
#define FACTOR_20470 2

int aplicar_limite20470(int valor) {
    if (valor > LIMITE_20470) return LIMITE_20470;
    return valor * FACTOR_20470;
}
