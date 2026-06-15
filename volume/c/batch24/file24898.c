// fichero 24898 -- macros y constantes -- MODIFICADO
#define LIMITE_24898 25098
#define FACTOR_24898 5

int aplicar_limite24898(int valor) {
    if (valor > LIMITE_24898) return LIMITE_24898;
    return valor * FACTOR_24898;
}
