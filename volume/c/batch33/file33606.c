// fichero 33606 -- macros y constantes
#define LIMITE_33606 33706
#define FACTOR_33606 2

int aplicar_limite33606(int valor) {
    if (valor > LIMITE_33606) return LIMITE_33606;
    return valor * FACTOR_33606;
}
