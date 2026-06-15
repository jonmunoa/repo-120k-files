// fichero 16554 -- macros y constantes -- MODIFICADO
#define LIMITE_16554 16754
#define FACTOR_16554 6

int aplicar_limite16554(int valor) {
    if (valor > LIMITE_16554) return LIMITE_16554;
    return valor * FACTOR_16554;
}
