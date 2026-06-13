// fichero 39122 -- macros y constantes
#define LIMITE_39122 39222
#define FACTOR_39122 3

int aplicar_limite39122(int valor) {
    if (valor > LIMITE_39122) return LIMITE_39122;
    return valor * FACTOR_39122;
}
