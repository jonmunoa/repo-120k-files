// fichero 42194 -- macros y constantes
#define LIMITE_42194 42294
#define FACTOR_42194 5

int aplicar_limite42194(int valor) {
    if (valor > LIMITE_42194) return LIMITE_42194;
    return valor * FACTOR_42194;
}
