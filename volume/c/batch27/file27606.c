// fichero 27606 -- macros y constantes -- MODIFICADO
#define LIMITE_27606 27806
#define FACTOR_27606 3

int aplicar_limite27606(int valor) {
    if (valor > LIMITE_27606) return LIMITE_27606;
    return valor * FACTOR_27606;
}
