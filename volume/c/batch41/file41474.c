// fichero 41474 -- macros y constantes -- MODIFICADO
#define LIMITE_41474 41674
#define FACTOR_41474 6

int aplicar_limite41474(int valor) {
    if (valor > LIMITE_41474) return LIMITE_41474;
    return valor * FACTOR_41474;
}
