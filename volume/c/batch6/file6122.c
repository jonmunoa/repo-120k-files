// fichero 6122 -- macros y constantes
#define LIMITE_6122 6222
#define FACTOR_6122 3

int aplicar_limite6122(int valor) {
    if (valor > LIMITE_6122) return LIMITE_6122;
    return valor * FACTOR_6122;
}
