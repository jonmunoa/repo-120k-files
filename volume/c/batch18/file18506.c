// fichero 18506 -- macros y constantes
#define LIMITE_18506 18606
#define FACTOR_18506 2

int aplicar_limite18506(int valor) {
    if (valor > LIMITE_18506) return LIMITE_18506;
    return valor * FACTOR_18506;
}
