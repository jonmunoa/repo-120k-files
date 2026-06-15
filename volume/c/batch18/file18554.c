// fichero 18554 -- macros y constantes -- MODIFICADO
#define LIMITE_18554 18754
#define FACTOR_18554 6

int aplicar_limite18554(int valor) {
    if (valor > LIMITE_18554) return LIMITE_18554;
    return valor * FACTOR_18554;
}
