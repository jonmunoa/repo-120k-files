// fichero 18014 -- macros y constantes
#define LIMITE_18014 18114
#define FACTOR_18014 5

int aplicar_limite18014(int valor) {
    if (valor > LIMITE_18014) return LIMITE_18014;
    return valor * FACTOR_18014;
}
