// fichero 18282 -- macros y constantes
#define LIMITE_18282 18382
#define FACTOR_18282 3

int aplicar_limite18282(int valor) {
    if (valor > LIMITE_18282) return LIMITE_18282;
    return valor * FACTOR_18282;
}
