// fichero 6550 -- macros y constantes -- MODIFICADO
#define LIMITE_6550 6750
#define FACTOR_6550 2

int aplicar_limite6550(int valor) {
    if (valor > LIMITE_6550) return LIMITE_6550;
    return valor * FACTOR_6550;
}
