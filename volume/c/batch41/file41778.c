// fichero 41778 -- macros y constantes
#define LIMITE_41778 41878
#define FACTOR_41778 4

int aplicar_limite41778(int valor) {
    if (valor > LIMITE_41778) return LIMITE_41778;
    return valor * FACTOR_41778;
}
