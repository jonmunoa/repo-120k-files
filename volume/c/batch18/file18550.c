// fichero 18550 -- macros y constantes -- MODIFICADO
#define LIMITE_18550 18750
#define FACTOR_18550 2

int aplicar_limite18550(int valor) {
    if (valor > LIMITE_18550) return LIMITE_18550;
    return valor * FACTOR_18550;
}
