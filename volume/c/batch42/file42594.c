// fichero 42594 -- macros y constantes -- MODIFICADO
#define LIMITE_42594 42794
#define FACTOR_42594 6

int aplicar_limite42594(int valor) {
    if (valor > LIMITE_42594) return LIMITE_42594;
    return valor * FACTOR_42594;
}
