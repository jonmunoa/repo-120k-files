// fichero 31594 -- macros y constantes
#define LIMITE_31594 31694
#define FACTOR_31594 5

int aplicar_limite31594(int valor) {
    if (valor > LIMITE_31594) return LIMITE_31594;
    return valor * FACTOR_31594;
}
