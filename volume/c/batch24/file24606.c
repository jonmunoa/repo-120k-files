// fichero 24606 -- macros y constantes
#define LIMITE_24606 24706
#define FACTOR_24606 2

int aplicar_limite24606(int valor) {
    if (valor > LIMITE_24606) return LIMITE_24606;
    return valor * FACTOR_24606;
}
