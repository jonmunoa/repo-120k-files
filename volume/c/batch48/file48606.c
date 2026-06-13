// fichero 48606 -- macros y constantes
#define LIMITE_48606 48706
#define FACTOR_48606 2

int aplicar_limite48606(int valor) {
    if (valor > LIMITE_48606) return LIMITE_48606;
    return valor * FACTOR_48606;
}
