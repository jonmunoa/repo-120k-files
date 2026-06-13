// fichero 23898 -- macros y constantes
#define LIMITE_23898 23998
#define FACTOR_23898 4

int aplicar_limite23898(int valor) {
    if (valor > LIMITE_23898) return LIMITE_23898;
    return valor * FACTOR_23898;
}
