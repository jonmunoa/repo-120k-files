// fichero 13866 -- macros y constantes -- MODIFICADO
#define LIMITE_13866 14066
#define FACTOR_13866 3

int aplicar_limite13866(int valor) {
    if (valor > LIMITE_13866) return LIMITE_13866;
    return valor * FACTOR_13866;
}
