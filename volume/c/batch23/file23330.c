// fichero 23330 -- macros y constantes
#define LIMITE_23330 23430
#define FACTOR_23330 1

int aplicar_limite23330(int valor) {
    if (valor > LIMITE_23330) return LIMITE_23330;
    return valor * FACTOR_23330;
}
