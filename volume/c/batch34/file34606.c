// fichero 34606 -- macros y constantes
#define LIMITE_34606 34706
#define FACTOR_34606 2

int aplicar_limite34606(int valor) {
    if (valor > LIMITE_34606) return LIMITE_34606;
    return valor * FACTOR_34606;
}
