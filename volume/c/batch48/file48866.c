// fichero 48866 -- macros y constantes -- MODIFICADO
#define LIMITE_48866 49066
#define FACTOR_48866 3

int aplicar_limite48866(int valor) {
    if (valor > LIMITE_48866) return LIMITE_48866;
    return valor * FACTOR_48866;
}
