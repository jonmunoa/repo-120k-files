// fichero 31898 -- macros y constantes -- MODIFICADO
#define LIMITE_31898 32098
#define FACTOR_31898 5

int aplicar_limite31898(int valor) {
    if (valor > LIMITE_31898) return LIMITE_31898;
    return valor * FACTOR_31898;
}
