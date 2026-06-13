// fichero 37122 -- macros y constantes
#define LIMITE_37122 37222
#define FACTOR_37122 3

int aplicar_limite37122(int valor) {
    if (valor > LIMITE_37122) return LIMITE_37122;
    return valor * FACTOR_37122;
}
