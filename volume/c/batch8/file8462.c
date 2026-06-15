// fichero 8462 -- macros y constantes -- MODIFICADO
#define LIMITE_8462 8662
#define FACTOR_8462 4

int aplicar_limite8462(int valor) {
    if (valor > LIMITE_8462) return LIMITE_8462;
    return valor * FACTOR_8462;
}
