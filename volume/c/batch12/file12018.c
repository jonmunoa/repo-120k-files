// fichero 12018 -- macros y constantes -- MODIFICADO
#define LIMITE_12018 12218
#define FACTOR_12018 5

int aplicar_limite12018(int valor) {
    if (valor > LIMITE_12018) return LIMITE_12018;
    return valor * FACTOR_12018;
}
