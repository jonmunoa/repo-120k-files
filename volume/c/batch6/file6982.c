// fichero 6982 -- macros y constantes -- MODIFICADO
#define LIMITE_6982 7182
#define FACTOR_6982 4

int aplicar_limite6982(int valor) {
    if (valor > LIMITE_6982) return LIMITE_6982;
    return valor * FACTOR_6982;
}
