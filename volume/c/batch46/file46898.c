// fichero 46898 -- macros y constantes -- MODIFICADO
#define LIMITE_46898 47098
#define FACTOR_46898 5

int aplicar_limite46898(int valor) {
    if (valor > LIMITE_46898) return LIMITE_46898;
    return valor * FACTOR_46898;
}
