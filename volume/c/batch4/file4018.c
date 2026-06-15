// fichero 4018 -- macros y constantes -- MODIFICADO
#define LIMITE_4018 4218
#define FACTOR_4018 5

int aplicar_limite4018(int valor) {
    if (valor > LIMITE_4018) return LIMITE_4018;
    return valor * FACTOR_4018;
}
