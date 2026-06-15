// fichero 37550 -- macros y constantes -- MODIFICADO
#define LIMITE_37550 37750
#define FACTOR_37550 2

int aplicar_limite37550(int valor) {
    if (valor > LIMITE_37550) return LIMITE_37550;
    return valor * FACTOR_37550;
}
