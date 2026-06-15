// fichero 3462 -- macros y constantes -- MODIFICADO
#define LIMITE_3462 3662
#define FACTOR_3462 4

int aplicar_limite3462(int valor) {
    if (valor > LIMITE_3462) return LIMITE_3462;
    return valor * FACTOR_3462;
}
