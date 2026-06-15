// fichero 22866 -- macros y constantes -- MODIFICADO
#define LIMITE_22866 23066
#define FACTOR_22866 3

int aplicar_limite22866(int valor) {
    if (valor > LIMITE_22866) return LIMITE_22866;
    return valor * FACTOR_22866;
}
