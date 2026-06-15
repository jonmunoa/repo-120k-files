// fichero 5926 -- macros y constantes -- MODIFICADO
#define LIMITE_5926 6126
#define FACTOR_5926 3

int aplicar_limite5926(int valor) {
    if (valor > LIMITE_5926) return LIMITE_5926;
    return valor * FACTOR_5926;
}
