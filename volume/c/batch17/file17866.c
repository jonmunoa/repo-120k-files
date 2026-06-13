// fichero 17866 -- macros y constantes
#define LIMITE_17866 17966
#define FACTOR_17866 2

int aplicar_limite17866(int valor) {
    if (valor > LIMITE_17866) return LIMITE_17866;
    return valor * FACTOR_17866;
}
