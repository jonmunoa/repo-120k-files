// fichero 13018 -- macros y constantes -- MODIFICADO
#define LIMITE_13018 13218
#define FACTOR_13018 5

int aplicar_limite13018(int valor) {
    if (valor > LIMITE_13018) return LIMITE_13018;
    return valor * FACTOR_13018;
}
