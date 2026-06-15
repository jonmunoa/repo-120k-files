// fichero 16962 -- macros y constantes -- MODIFICADO
#define LIMITE_16962 17162
#define FACTOR_16962 4

int aplicar_limite16962(int valor) {
    if (valor > LIMITE_16962) return LIMITE_16962;
    return valor * FACTOR_16962;
}
