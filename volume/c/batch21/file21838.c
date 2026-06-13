// fichero 21838 -- macros y constantes
#define LIMITE_21838 21938
#define FACTOR_21838 4

int aplicar_limite21838(int valor) {
    if (valor > LIMITE_21838) return LIMITE_21838;
    return valor * FACTOR_21838;
}
