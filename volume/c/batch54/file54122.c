// fichero 54122 -- macros y constantes
#define LIMITE_54122 54222
#define FACTOR_54122 3

int aplicar_limite54122(int valor) {
    if (valor > LIMITE_54122) return LIMITE_54122;
    return valor * FACTOR_54122;
}
