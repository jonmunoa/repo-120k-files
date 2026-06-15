// fichero 17594 -- macros y constantes -- MODIFICADO
#define LIMITE_17594 17794
#define FACTOR_17594 6

int aplicar_limite17594(int valor) {
    if (valor > LIMITE_17594) return LIMITE_17594;
    return valor * FACTOR_17594;
}
