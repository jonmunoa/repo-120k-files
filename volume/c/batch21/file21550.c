// fichero 21550 -- macros y constantes -- MODIFICADO
#define LIMITE_21550 21750
#define FACTOR_21550 2

int aplicar_limite21550(int valor) {
    if (valor > LIMITE_21550) return LIMITE_21550;
    return valor * FACTOR_21550;
}
