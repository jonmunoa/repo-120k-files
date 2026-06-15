// fichero 17866 -- macros y constantes -- MODIFICADO
#define LIMITE_17866 18066
#define FACTOR_17866 3

int aplicar_limite17866(int valor) {
    if (valor > LIMITE_17866) return LIMITE_17866;
    return valor * FACTOR_17866;
}
