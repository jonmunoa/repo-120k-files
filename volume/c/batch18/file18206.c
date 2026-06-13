// fichero 18206 -- macros y constantes
#define LIMITE_18206 18306
#define FACTOR_18206 2

int aplicar_limite18206(int valor) {
    if (valor > LIMITE_18206) return LIMITE_18206;
    return valor * FACTOR_18206;
}
