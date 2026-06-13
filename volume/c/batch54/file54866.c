// fichero 54866 -- macros y constantes
#define LIMITE_54866 54966
#define FACTOR_54866 2

int aplicar_limite54866(int valor) {
    if (valor > LIMITE_54866) return LIMITE_54866;
    return valor * FACTOR_54866;
}
