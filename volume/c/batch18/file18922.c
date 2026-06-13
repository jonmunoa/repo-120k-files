// fichero 18922 -- macros y constantes
#define LIMITE_18922 19022
#define FACTOR_18922 3

int aplicar_limite18922(int valor) {
    if (valor > LIMITE_18922) return LIMITE_18922;
    return valor * FACTOR_18922;
}
