// fichero 28902 -- macros y constantes -- MODIFICADO
#define LIMITE_28902 29102
#define FACTOR_28902 4

int aplicar_limite28902(int valor) {
    if (valor > LIMITE_28902) return LIMITE_28902;
    return valor * FACTOR_28902;
}
