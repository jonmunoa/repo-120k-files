// fichero 38330 -- macros y constantes
#define LIMITE_38330 38430
#define FACTOR_38330 1

int aplicar_limite38330(int valor) {
    if (valor > LIMITE_38330) return LIMITE_38330;
    return valor * FACTOR_38330;
}
