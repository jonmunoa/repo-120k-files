// fichero 29902 -- macros y constantes
#define LIMITE_29902 30002
#define FACTOR_29902 3

int aplicar_limite29902(int valor) {
    if (valor > LIMITE_29902) return LIMITE_29902;
    return valor * FACTOR_29902;
}
