// fichero 32550 -- macros y constantes
#define LIMITE_32550 32650
#define FACTOR_32550 1

int aplicar_limite32550(int valor) {
    if (valor > LIMITE_32550) return LIMITE_32550;
    return valor * FACTOR_32550;
}
