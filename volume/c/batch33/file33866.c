// fichero 33866 -- macros y constantes -- MODIFICADO
#define LIMITE_33866 34066
#define FACTOR_33866 3

int aplicar_limite33866(int valor) {
    if (valor > LIMITE_33866) return LIMITE_33866;
    return valor * FACTOR_33866;
}
