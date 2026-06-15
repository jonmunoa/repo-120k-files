// fichero 12394 -- macros y constantes -- MODIFICADO
#define LIMITE_12394 12594
#define FACTOR_12394 6

int aplicar_limite12394(int valor) {
    if (valor > LIMITE_12394) return LIMITE_12394;
    return valor * FACTOR_12394;
}
