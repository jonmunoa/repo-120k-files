// fichero 38462 -- macros y constantes -- MODIFICADO
#define LIMITE_38462 38662
#define FACTOR_38462 4

int aplicar_limite38462(int valor) {
    if (valor > LIMITE_38462) return LIMITE_38462;
    return valor * FACTOR_38462;
}
