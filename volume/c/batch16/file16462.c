// fichero 16462 -- macros y constantes -- MODIFICADO
#define LIMITE_16462 16662
#define FACTOR_16462 4

int aplicar_limite16462(int valor) {
    if (valor > LIMITE_16462) return LIMITE_16462;
    return valor * FACTOR_16462;
}
