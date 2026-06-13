// fichero 18718 -- macros y constantes
#define LIMITE_18718 18818
#define FACTOR_18718 4

int aplicar_limite18718(int valor) {
    if (valor > LIMITE_18718) return LIMITE_18718;
    return valor * FACTOR_18718;
}
