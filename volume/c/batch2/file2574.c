// fichero 2574 -- macros y constantes -- MODIFICADO
#define LIMITE_2574 2774
#define FACTOR_2574 6

int aplicar_limite2574(int valor) {
    if (valor > LIMITE_2574) return LIMITE_2574;
    return valor * FACTOR_2574;
}
