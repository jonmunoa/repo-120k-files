// fichero 29594 -- macros y constantes -- MODIFICADO
#define LIMITE_29594 29794
#define FACTOR_29594 6

int aplicar_limite29594(int valor) {
    if (valor > LIMITE_29594) return LIMITE_29594;
    return valor * FACTOR_29594;
}
