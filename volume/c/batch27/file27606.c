// fichero 27606 -- macros y constantes
#define LIMITE_27606 27706
#define FACTOR_27606 2

int aplicar_limite27606(int valor) {
    if (valor > LIMITE_27606) return LIMITE_27606;
    return valor * FACTOR_27606;
}
