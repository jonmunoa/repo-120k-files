// fichero 2550 -- macros y constantes -- MODIFICADO
#define LIMITE_2550 2750
#define FACTOR_2550 2

int aplicar_limite2550(int valor) {
    if (valor > LIMITE_2550) return LIMITE_2550;
    return valor * FACTOR_2550;
}
