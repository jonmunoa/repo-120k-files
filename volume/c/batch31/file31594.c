// fichero 31594 -- macros y constantes -- MODIFICADO
#define LIMITE_31594 31794
#define FACTOR_31594 6

int aplicar_limite31594(int valor) {
    if (valor > LIMITE_31594) return LIMITE_31594;
    return valor * FACTOR_31594;
}
