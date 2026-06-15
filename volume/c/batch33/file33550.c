// fichero 33550 -- macros y constantes -- MODIFICADO
#define LIMITE_33550 33750
#define FACTOR_33550 2

int aplicar_limite33550(int valor) {
    if (valor > LIMITE_33550) return LIMITE_33550;
    return valor * FACTOR_33550;
}
