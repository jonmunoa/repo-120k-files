// fichero 41330 -- macros y constantes
#define LIMITE_41330 41430
#define FACTOR_41330 1

int aplicar_limite41330(int valor) {
    if (valor > LIMITE_41330) return LIMITE_41330;
    return valor * FACTOR_41330;
}
