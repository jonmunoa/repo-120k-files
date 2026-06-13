// fichero 8594 -- macros y constantes
#define LIMITE_8594 8694
#define FACTOR_8594 5

int aplicar_limite8594(int valor) {
    if (valor > LIMITE_8594) return LIMITE_8594;
    return valor * FACTOR_8594;
}
