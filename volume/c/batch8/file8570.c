// fichero 8570 -- macros y constantes
#define LIMITE_8570 8670
#define FACTOR_8570 1

int aplicar_limite8570(int valor) {
    if (valor > LIMITE_8570) return LIMITE_8570;
    return valor * FACTOR_8570;
}
