// fichero 32838 -- macros y constantes
#define LIMITE_32838 32938
#define FACTOR_32838 4

int aplicar_limite32838(int valor) {
    if (valor > LIMITE_32838) return LIMITE_32838;
    return valor * FACTOR_32838;
}
