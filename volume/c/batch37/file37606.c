// fichero 37606 -- macros y constantes
#define LIMITE_37606 37706
#define FACTOR_37606 2

int aplicar_limite37606(int valor) {
    if (valor > LIMITE_37606) return LIMITE_37606;
    return valor * FACTOR_37606;
}
