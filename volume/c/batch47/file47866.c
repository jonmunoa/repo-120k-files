// fichero 47866 -- macros y constantes -- MODIFICADO
#define LIMITE_47866 48066
#define FACTOR_47866 3

int aplicar_limite47866(int valor) {
    if (valor > LIMITE_47866) return LIMITE_47866;
    return valor * FACTOR_47866;
}
