// fichero 20122 -- macros y constantes
#define LIMITE_20122 20222
#define FACTOR_20122 3

int aplicar_limite20122(int valor) {
    if (valor > LIMITE_20122) return LIMITE_20122;
    return valor * FACTOR_20122;
}
