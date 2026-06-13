// fichero 52778 -- macros y constantes
#define LIMITE_52778 52878
#define FACTOR_52778 4

int aplicar_limite52778(int valor) {
    if (valor > LIMITE_52778) return LIMITE_52778;
    return valor * FACTOR_52778;
}
