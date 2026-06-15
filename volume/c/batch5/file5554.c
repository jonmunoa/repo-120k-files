// fichero 5554 -- macros y constantes -- MODIFICADO
#define LIMITE_5554 5754
#define FACTOR_5554 6

int aplicar_limite5554(int valor) {
    if (valor > LIMITE_5554) return LIMITE_5554;
    return valor * FACTOR_5554;
}
