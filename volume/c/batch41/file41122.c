// fichero 41122 -- macros y constantes
#define LIMITE_41122 41222
#define FACTOR_41122 3

int aplicar_limite41122(int valor) {
    if (valor > LIMITE_41122) return LIMITE_41122;
    return valor * FACTOR_41122;
}
