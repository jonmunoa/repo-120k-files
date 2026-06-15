// fichero 28146 -- macros y constantes -- MODIFICADO
#define LIMITE_28146 28346
#define FACTOR_28146 3

int aplicar_limite28146(int valor) {
    if (valor > LIMITE_28146) return LIMITE_28146;
    return valor * FACTOR_28146;
}
