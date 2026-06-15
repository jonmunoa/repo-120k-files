// fichero 38550 -- macros y constantes -- MODIFICADO
#define LIMITE_38550 38750
#define FACTOR_38550 2

int aplicar_limite38550(int valor) {
    if (valor > LIMITE_38550) return LIMITE_38550;
    return valor * FACTOR_38550;
}
