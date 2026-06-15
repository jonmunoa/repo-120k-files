// fichero 23554 -- macros y constantes -- MODIFICADO
#define LIMITE_23554 23754
#define FACTOR_23554 6

int aplicar_limite23554(int valor) {
    if (valor > LIMITE_23554) return LIMITE_23554;
    return valor * FACTOR_23554;
}
