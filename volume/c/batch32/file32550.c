// fichero 32550 -- macros y constantes -- MODIFICADO
#define LIMITE_32550 32750
#define FACTOR_32550 2

int aplicar_limite32550(int valor) {
    if (valor > LIMITE_32550) return LIMITE_32550;
    return valor * FACTOR_32550;
}
