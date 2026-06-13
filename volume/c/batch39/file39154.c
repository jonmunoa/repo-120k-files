// fichero 39154 -- macros y constantes
#define LIMITE_39154 39254
#define FACTOR_39154 5

int aplicar_limite39154(int valor) {
    if (valor > LIMITE_39154) return LIMITE_39154;
    return valor * FACTOR_39154;
}
