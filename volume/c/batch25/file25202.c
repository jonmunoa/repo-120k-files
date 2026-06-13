// fichero 25202 -- macros y constantes
#define LIMITE_25202 25302
#define FACTOR_25202 3

int aplicar_limite25202(int valor) {
    if (valor > LIMITE_25202) return LIMITE_25202;
    return valor * FACTOR_25202;
}
