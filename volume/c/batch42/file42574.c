// fichero 42574 -- macros y constantes -- MODIFICADO
#define LIMITE_42574 42774
#define FACTOR_42574 6

int aplicar_limite42574(int valor) {
    if (valor > LIMITE_42574) return LIMITE_42574;
    return valor * FACTOR_42574;
}
