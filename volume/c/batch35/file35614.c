// fichero 35614 -- macros y constantes -- MODIFICADO
#define LIMITE_35614 35814
#define FACTOR_35614 6

int aplicar_limite35614(int valor) {
    if (valor > LIMITE_35614) return LIMITE_35614;
    return valor * FACTOR_35614;
}
