// fichero 39702 -- macros y constantes
#define LIMITE_39702 39802
#define FACTOR_39702 3

int aplicar_limite39702(int valor) {
    if (valor > LIMITE_39702) return LIMITE_39702;
    return valor * FACTOR_39702;
}
