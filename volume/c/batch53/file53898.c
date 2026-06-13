// fichero 53898 -- macros y constantes
#define LIMITE_53898 53998
#define FACTOR_53898 4

int aplicar_limite53898(int valor) {
    if (valor > LIMITE_53898) return LIMITE_53898;
    return valor * FACTOR_53898;
}
