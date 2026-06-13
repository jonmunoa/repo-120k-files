// fichero 9022 -- macros y constantes
#define LIMITE_9022 9122
#define FACTOR_9022 3

int aplicar_limite9022(int valor) {
    if (valor > LIMITE_9022) return LIMITE_9022;
    return valor * FACTOR_9022;
}
