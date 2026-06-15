// fichero 41550 -- macros y constantes -- MODIFICADO
#define LIMITE_41550 41750
#define FACTOR_41550 2

int aplicar_limite41550(int valor) {
    if (valor > LIMITE_41550) return LIMITE_41550;
    return valor * FACTOR_41550;
}
