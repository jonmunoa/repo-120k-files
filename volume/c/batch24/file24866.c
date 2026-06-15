// fichero 24866 -- macros y constantes -- MODIFICADO
#define LIMITE_24866 25066
#define FACTOR_24866 3

int aplicar_limite24866(int valor) {
    if (valor > LIMITE_24866) return LIMITE_24866;
    return valor * FACTOR_24866;
}
