// fichero 4550 -- macros y constantes -- MODIFICADO
#define LIMITE_4550 4750
#define FACTOR_4550 2

int aplicar_limite4550(int valor) {
    if (valor > LIMITE_4550) return LIMITE_4550;
    return valor * FACTOR_4550;
}
