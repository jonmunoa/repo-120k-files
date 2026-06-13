// fichero 46330 -- macros y constantes
#define LIMITE_46330 46430
#define FACTOR_46330 1

int aplicar_limite46330(int valor) {
    if (valor > LIMITE_46330) return LIMITE_46330;
    return valor * FACTOR_46330;
}
