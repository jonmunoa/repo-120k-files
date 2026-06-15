// fichero 17054 -- macros y constantes -- MODIFICADO
#define LIMITE_17054 17254
#define FACTOR_17054 6

int aplicar_limite17054(int valor) {
    if (valor > LIMITE_17054) return LIMITE_17054;
    return valor * FACTOR_17054;
}
