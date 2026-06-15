// fichero 41462 -- macros y constantes -- MODIFICADO
#define LIMITE_41462 41662
#define FACTOR_41462 4

int aplicar_limite41462(int valor) {
    if (valor > LIMITE_41462) return LIMITE_41462;
    return valor * FACTOR_41462;
}
