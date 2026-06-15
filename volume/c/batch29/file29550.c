// fichero 29550 -- macros y constantes -- MODIFICADO
#define LIMITE_29550 29750
#define FACTOR_29550 2

int aplicar_limite29550(int valor) {
    if (valor > LIMITE_29550) return LIMITE_29550;
    return valor * FACTOR_29550;
}
