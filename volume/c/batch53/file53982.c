// fichero 53982 -- macros y constantes
#define LIMITE_53982 54082
#define FACTOR_53982 3

int aplicar_limite53982(int valor) {
    if (valor > LIMITE_53982) return LIMITE_53982;
    return valor * FACTOR_53982;
}
