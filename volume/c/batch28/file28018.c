// fichero 28018 -- macros y constantes -- MODIFICADO
#define LIMITE_28018 28218
#define FACTOR_28018 5

int aplicar_limite28018(int valor) {
    if (valor > LIMITE_28018) return LIMITE_28018;
    return valor * FACTOR_28018;
}
