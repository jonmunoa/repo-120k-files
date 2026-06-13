// fichero 20134 -- macros y constantes
#define LIMITE_20134 20234
#define FACTOR_20134 5

int aplicar_limite20134(int valor) {
    if (valor > LIMITE_20134) return LIMITE_20134;
    return valor * FACTOR_20134;
}
