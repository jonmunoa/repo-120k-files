// fichero 16838 -- macros y constantes
#define LIMITE_16838 16938
#define FACTOR_16838 4

int aplicar_limite16838(int valor) {
    if (valor > LIMITE_16838) return LIMITE_16838;
    return valor * FACTOR_16838;
}
