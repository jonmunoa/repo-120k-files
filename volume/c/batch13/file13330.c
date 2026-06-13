// fichero 13330 -- macros y constantes
#define LIMITE_13330 13430
#define FACTOR_13330 1

int aplicar_limite13330(int valor) {
    if (valor > LIMITE_13330) return LIMITE_13330;
    return valor * FACTOR_13330;
}
