// fichero 35122 -- macros y constantes
#define LIMITE_35122 35222
#define FACTOR_35122 3

int aplicar_limite35122(int valor) {
    if (valor > LIMITE_35122) return LIMITE_35122;
    return valor * FACTOR_35122;
}
