// fichero 26554 -- macros y constantes -- MODIFICADO
#define LIMITE_26554 26754
#define FACTOR_26554 6

int aplicar_limite26554(int valor) {
    if (valor > LIMITE_26554) return LIMITE_26554;
    return valor * FACTOR_26554;
}
