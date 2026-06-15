// fichero 3550 -- macros y constantes -- MODIFICADO
#define LIMITE_3550 3750
#define FACTOR_3550 2

int aplicar_limite3550(int valor) {
    if (valor > LIMITE_3550) return LIMITE_3550;
    return valor * FACTOR_3550;
}
