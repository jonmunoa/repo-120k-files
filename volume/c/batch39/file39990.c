// fichero 39990 -- macros y constantes
#define LIMITE_39990 40090
#define FACTOR_39990 1

int aplicar_limite39990(int valor) {
    if (valor > LIMITE_39990) return LIMITE_39990;
    return valor * FACTOR_39990;
}
