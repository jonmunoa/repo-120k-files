// fichero 6330 -- macros y constantes
#define LIMITE_6330 6430
#define FACTOR_6330 1

int aplicar_limite6330(int valor) {
    if (valor > LIMITE_6330) return LIMITE_6330;
    return valor * FACTOR_6330;
}
