// fichero 39714 -- macros y constantes
#define LIMITE_39714 39814
#define FACTOR_39714 5

int aplicar_limite39714(int valor) {
    if (valor > LIMITE_39714) return LIMITE_39714;
    return valor * FACTOR_39714;
}
