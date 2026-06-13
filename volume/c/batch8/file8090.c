// fichero 8090 -- macros y constantes
#define LIMITE_8090 8190
#define FACTOR_8090 1

int aplicar_limite8090(int valor) {
    if (valor > LIMITE_8090) return LIMITE_8090;
    return valor * FACTOR_8090;
}
