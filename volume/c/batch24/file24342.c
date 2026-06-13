// fichero 24342 -- macros y constantes
#define LIMITE_24342 24442
#define FACTOR_24342 3

int aplicar_limite24342(int valor) {
    if (valor > LIMITE_24342) return LIMITE_24342;
    return valor * FACTOR_24342;
}
