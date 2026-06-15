// fichero 29394 -- macros y constantes -- MODIFICADO
#define LIMITE_29394 29594
#define FACTOR_29394 6

int aplicar_limite29394(int valor) {
    if (valor > LIMITE_29394) return LIMITE_29394;
    return valor * FACTOR_29394;
}
