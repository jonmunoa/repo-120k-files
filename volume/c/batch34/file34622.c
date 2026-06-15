// fichero 34622 -- macros y constantes -- MODIFICADO
#define LIMITE_34622 34822
#define FACTOR_34622 4

int aplicar_limite34622(int valor) {
    if (valor > LIMITE_34622) return LIMITE_34622;
    return valor * FACTOR_34622;
}
