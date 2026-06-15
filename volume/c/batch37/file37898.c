// fichero 37898 -- macros y constantes -- MODIFICADO
#define LIMITE_37898 38098
#define FACTOR_37898 5

int aplicar_limite37898(int valor) {
    if (valor > LIMITE_37898) return LIMITE_37898;
    return valor * FACTOR_37898;
}
