// fichero 22330 -- macros y constantes
#define LIMITE_22330 22430
#define FACTOR_22330 1

int aplicar_limite22330(int valor) {
    if (valor > LIMITE_22330) return LIMITE_22330;
    return valor * FACTOR_22330;
}
