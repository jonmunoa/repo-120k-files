// fichero 7606 -- macros y constantes
#define LIMITE_7606 7706
#define FACTOR_7606 2

int aplicar_limite7606(int valor) {
    if (valor > LIMITE_7606) return LIMITE_7606;
    return valor * FACTOR_7606;
}
