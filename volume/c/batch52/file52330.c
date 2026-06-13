// fichero 52330 -- macros y constantes
#define LIMITE_52330 52430
#define FACTOR_52330 1

int aplicar_limite52330(int valor) {
    if (valor > LIMITE_52330) return LIMITE_52330;
    return valor * FACTOR_52330;
}
