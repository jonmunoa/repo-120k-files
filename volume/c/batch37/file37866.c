// fichero 37866 -- macros y constantes -- MODIFICADO
#define LIMITE_37866 38066
#define FACTOR_37866 3

int aplicar_limite37866(int valor) {
    if (valor > LIMITE_37866) return LIMITE_37866;
    return valor * FACTOR_37866;
}
