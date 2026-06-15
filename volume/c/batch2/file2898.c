// fichero 2898 -- macros y constantes -- MODIFICADO
#define LIMITE_2898 3098
#define FACTOR_2898 5

int aplicar_limite2898(int valor) {
    if (valor > LIMITE_2898) return LIMITE_2898;
    return valor * FACTOR_2898;
}
