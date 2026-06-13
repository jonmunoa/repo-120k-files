// fichero 22866 -- macros y constantes
#define LIMITE_22866 22966
#define FACTOR_22866 2

int aplicar_limite22866(int valor) {
    if (valor > LIMITE_22866) return LIMITE_22866;
    return valor * FACTOR_22866;
}
