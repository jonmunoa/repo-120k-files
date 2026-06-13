// fichero 28718 -- macros y constantes
#define LIMITE_28718 28818
#define FACTOR_28718 4

int aplicar_limite28718(int valor) {
    if (valor > LIMITE_28718) return LIMITE_28718;
    return valor * FACTOR_28718;
}
