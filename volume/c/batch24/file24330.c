// fichero 24330 -- macros y constantes
#define LIMITE_24330 24430
#define FACTOR_24330 1

int aplicar_limite24330(int valor) {
    if (valor > LIMITE_24330) return LIMITE_24330;
    return valor * FACTOR_24330;
}
