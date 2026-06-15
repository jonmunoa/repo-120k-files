// fichero 43866 -- macros y constantes -- MODIFICADO
#define LIMITE_43866 44066
#define FACTOR_43866 3

int aplicar_limite43866(int valor) {
    if (valor > LIMITE_43866) return LIMITE_43866;
    return valor * FACTOR_43866;
}
