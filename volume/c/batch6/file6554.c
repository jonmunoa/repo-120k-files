// fichero 6554 -- macros y constantes -- MODIFICADO
#define LIMITE_6554 6754
#define FACTOR_6554 6

int aplicar_limite6554(int valor) {
    if (valor > LIMITE_6554) return LIMITE_6554;
    return valor * FACTOR_6554;
}
