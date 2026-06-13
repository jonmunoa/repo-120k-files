// fichero 42094 -- macros y constantes
#define LIMITE_42094 42194
#define FACTOR_42094 5

int aplicar_limite42094(int valor) {
    if (valor > LIMITE_42094) return LIMITE_42094;
    return valor * FACTOR_42094;
}
