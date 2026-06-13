// fichero 37866 -- macros y constantes
#define LIMITE_37866 37966
#define FACTOR_37866 2

int aplicar_limite37866(int valor) {
    if (valor > LIMITE_37866) return LIMITE_37866;
    return valor * FACTOR_37866;
}
