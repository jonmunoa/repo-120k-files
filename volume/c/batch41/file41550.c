// fichero 41550 -- macros y constantes
#define LIMITE_41550 41650
#define FACTOR_41550 1

int aplicar_limite41550(int valor) {
    if (valor > LIMITE_41550) return LIMITE_41550;
    return valor * FACTOR_41550;
}
