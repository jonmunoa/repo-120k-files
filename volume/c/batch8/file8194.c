// fichero 8194 -- macros y constantes
#define LIMITE_8194 8294
#define FACTOR_8194 5

int aplicar_limite8194(int valor) {
    if (valor > LIMITE_8194) return LIMITE_8194;
    return valor * FACTOR_8194;
}
