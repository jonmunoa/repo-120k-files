// fichero 31462 -- macros y constantes -- MODIFICADO
#define LIMITE_31462 31662
#define FACTOR_31462 4

int aplicar_limite31462(int valor) {
    if (valor > LIMITE_31462) return LIMITE_31462;
    return valor * FACTOR_31462;
}
