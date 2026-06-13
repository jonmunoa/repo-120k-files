// fichero 62 -- macros y constantes
#define LIMITE_62 162
#define FACTOR_62 3

int aplicar_limite62(int valor) {
    if (valor > LIMITE_62) return LIMITE_62;
    return valor * FACTOR_62;
}
