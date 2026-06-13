// fichero 30094 -- macros y constantes
#define LIMITE_30094 30194
#define FACTOR_30094 5

int aplicar_limite30094(int valor) {
    if (valor > LIMITE_30094) return LIMITE_30094;
    return valor * FACTOR_30094;
}
