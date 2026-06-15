// fichero 41282 -- macros y constantes -- MODIFICADO
#define LIMITE_41282 41482
#define FACTOR_41282 4

int aplicar_limite41282(int valor) {
    if (valor > LIMITE_41282) return LIMITE_41282;
    return valor * FACTOR_41282;
}
