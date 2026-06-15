// fichero 49462 -- macros y constantes -- MODIFICADO
#define LIMITE_49462 49662
#define FACTOR_49462 4

int aplicar_limite49462(int valor) {
    if (valor > LIMITE_49462) return LIMITE_49462;
    return valor * FACTOR_49462;
}
