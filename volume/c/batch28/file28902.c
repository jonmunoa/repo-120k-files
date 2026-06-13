// fichero 28902 -- macros y constantes
#define LIMITE_28902 29002
#define FACTOR_28902 3

int aplicar_limite28902(int valor) {
    if (valor > LIMITE_28902) return LIMITE_28902;
    return valor * FACTOR_28902;
}
