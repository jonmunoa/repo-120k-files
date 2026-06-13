// fichero 49570 -- macros y constantes
#define LIMITE_49570 49670
#define FACTOR_49570 1

int aplicar_limite49570(int valor) {
    if (valor > LIMITE_49570) return LIMITE_49570;
    return valor * FACTOR_49570;
}
