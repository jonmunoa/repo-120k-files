// fichero 36866 -- macros y constantes -- MODIFICADO
#define LIMITE_36866 37066
#define FACTOR_36866 3

int aplicar_limite36866(int valor) {
    if (valor > LIMITE_36866) return LIMITE_36866;
    return valor * FACTOR_36866;
}
