// fichero 18550 -- macros y constantes
#define LIMITE_18550 18650
#define FACTOR_18550 1

int aplicar_limite18550(int valor) {
    if (valor > LIMITE_18550) return LIMITE_18550;
    return valor * FACTOR_18550;
}
