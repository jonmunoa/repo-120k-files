// fichero 35462 -- macros y constantes -- MODIFICADO
#define LIMITE_35462 35662
#define FACTOR_35462 4

int aplicar_limite35462(int valor) {
    if (valor > LIMITE_35462) return LIMITE_35462;
    return valor * FACTOR_35462;
}
