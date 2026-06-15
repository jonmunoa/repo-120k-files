// fichero 10550 -- macros y constantes -- MODIFICADO
#define LIMITE_10550 10750
#define FACTOR_10550 2

int aplicar_limite10550(int valor) {
    if (valor > LIMITE_10550) return LIMITE_10550;
    return valor * FACTOR_10550;
}
