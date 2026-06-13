// fichero 45838 -- macros y constantes
#define LIMITE_45838 45938
#define FACTOR_45838 4

int aplicar_limite45838(int valor) {
    if (valor > LIMITE_45838) return LIMITE_45838;
    return valor * FACTOR_45838;
}
