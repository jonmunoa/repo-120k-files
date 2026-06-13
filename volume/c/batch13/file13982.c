// fichero 13982 -- macros y constantes
#define LIMITE_13982 14082
#define FACTOR_13982 3

int aplicar_limite13982(int valor) {
    if (valor > LIMITE_13982) return LIMITE_13982;
    return valor * FACTOR_13982;
}
