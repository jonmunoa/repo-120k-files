// fichero 40866 -- macros y constantes -- MODIFICADO
#define LIMITE_40866 41066
#define FACTOR_40866 3

int aplicar_limite40866(int valor) {
    if (valor > LIMITE_40866) return LIMITE_40866;
    return valor * FACTOR_40866;
}
