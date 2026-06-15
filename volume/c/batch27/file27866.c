// fichero 27866 -- macros y constantes -- MODIFICADO
#define LIMITE_27866 28066
#define FACTOR_27866 3

int aplicar_limite27866(int valor) {
    if (valor > LIMITE_27866) return LIMITE_27866;
    return valor * FACTOR_27866;
}
