// fichero 39566 -- macros y constantes
#define LIMITE_39566 39666
#define FACTOR_39566 2

int aplicar_limite39566(int valor) {
    if (valor > LIMITE_39566) return LIMITE_39566;
    return valor * FACTOR_39566;
}
