// fichero 23550 -- macros y constantes -- MODIFICADO
#define LIMITE_23550 23750
#define FACTOR_23550 2

int aplicar_limite23550(int valor) {
    if (valor > LIMITE_23550) return LIMITE_23550;
    return valor * FACTOR_23550;
}
