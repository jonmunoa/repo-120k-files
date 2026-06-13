// fichero 37898 -- macros y constantes
#define LIMITE_37898 37998
#define FACTOR_37898 4

int aplicar_limite37898(int valor) {
    if (valor > LIMITE_37898) return LIMITE_37898;
    return valor * FACTOR_37898;
}
