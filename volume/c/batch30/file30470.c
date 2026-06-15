// fichero 30470 -- macros y constantes -- MODIFICADO
#define LIMITE_30470 30670
#define FACTOR_30470 2

int aplicar_limite30470(int valor) {
    if (valor > LIMITE_30470) return LIMITE_30470;
    return valor * FACTOR_30470;
}
