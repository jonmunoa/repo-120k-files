// fichero 47898 -- macros y constantes -- MODIFICADO
#define LIMITE_47898 48098
#define FACTOR_47898 5

int aplicar_limite47898(int valor) {
    if (valor > LIMITE_47898) return LIMITE_47898;
    return valor * FACTOR_47898;
}
