// fichero 34022 -- macros y constantes
#define LIMITE_34022 34122
#define FACTOR_34022 3

int aplicar_limite34022(int valor) {
    if (valor > LIMITE_34022) return LIMITE_34022;
    return valor * FACTOR_34022;
}
