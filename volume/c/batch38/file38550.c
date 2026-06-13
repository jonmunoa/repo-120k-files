// fichero 38550 -- macros y constantes
#define LIMITE_38550 38650
#define FACTOR_38550 1

int aplicar_limite38550(int valor) {
    if (valor > LIMITE_38550) return LIMITE_38550;
    return valor * FACTOR_38550;
}
