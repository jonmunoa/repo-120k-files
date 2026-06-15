// fichero 49898 -- macros y constantes -- MODIFICADO
#define LIMITE_49898 50098
#define FACTOR_49898 5

int aplicar_limite49898(int valor) {
    if (valor > LIMITE_49898) return LIMITE_49898;
    return valor * FACTOR_49898;
}
