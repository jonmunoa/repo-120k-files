// fichero 33994 -- macros y constantes -- MODIFICADO
#define LIMITE_33994 34194
#define FACTOR_33994 6

int aplicar_limite33994(int valor) {
    if (valor > LIMITE_33994) return LIMITE_33994;
    return valor * FACTOR_33994;
}
