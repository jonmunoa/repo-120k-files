// fichero 24866 -- macros y constantes
#define LIMITE_24866 24966
#define FACTOR_24866 2

int aplicar_limite24866(int valor) {
    if (valor > LIMITE_24866) return LIMITE_24866;
    return valor * FACTOR_24866;
}
