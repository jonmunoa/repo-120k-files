// fichero 50330 -- macros y constantes
#define LIMITE_50330 50430
#define FACTOR_50330 1

int aplicar_limite50330(int valor) {
    if (valor > LIMITE_50330) return LIMITE_50330;
    return valor * FACTOR_50330;
}
