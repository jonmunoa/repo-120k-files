// fichero 41866 -- macros y constantes
#define LIMITE_41866 41966
#define FACTOR_41866 2

int aplicar_limite41866(int valor) {
    if (valor > LIMITE_41866) return LIMITE_41866;
    return valor * FACTOR_41866;
}
