// fichero 20550 -- macros y constantes
#define LIMITE_20550 20650
#define FACTOR_20550 1

int aplicar_limite20550(int valor) {
    if (valor > LIMITE_20550) return LIMITE_20550;
    return valor * FACTOR_20550;
}
