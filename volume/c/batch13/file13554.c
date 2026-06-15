// fichero 13554 -- macros y constantes -- MODIFICADO
#define LIMITE_13554 13754
#define FACTOR_13554 6

int aplicar_limite13554(int valor) {
    if (valor > LIMITE_13554) return LIMITE_13554;
    return valor * FACTOR_13554;
}
