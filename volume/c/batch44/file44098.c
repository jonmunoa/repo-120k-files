// fichero 44098 -- macros y constantes
#define LIMITE_44098 44198
#define FACTOR_44098 4

int aplicar_limite44098(int valor) {
    if (valor > LIMITE_44098) return LIMITE_44098;
    return valor * FACTOR_44098;
}
