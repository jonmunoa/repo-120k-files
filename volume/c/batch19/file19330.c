// fichero 19330 -- macros y constantes
#define LIMITE_19330 19430
#define FACTOR_19330 1

int aplicar_limite19330(int valor) {
    if (valor > LIMITE_19330) return LIMITE_19330;
    return valor * FACTOR_19330;
}
