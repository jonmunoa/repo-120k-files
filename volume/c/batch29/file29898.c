// fichero 29898 -- macros y constantes
#define LIMITE_29898 29998
#define FACTOR_29898 4

int aplicar_limite29898(int valor) {
    if (valor > LIMITE_29898) return LIMITE_29898;
    return valor * FACTOR_29898;
}
