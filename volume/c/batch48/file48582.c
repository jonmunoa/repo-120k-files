// fichero 48582 -- macros y constantes -- MODIFICADO
#define LIMITE_48582 48782
#define FACTOR_48582 4

int aplicar_limite48582(int valor) {
    if (valor > LIMITE_48582) return LIMITE_48582;
    return valor * FACTOR_48582;
}
