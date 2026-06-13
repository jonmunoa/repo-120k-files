// fichero 25902 -- macros y constantes
#define LIMITE_25902 26002
#define FACTOR_25902 3

int aplicar_limite25902(int valor) {
    if (valor > LIMITE_25902) return LIMITE_25902;
    return valor * FACTOR_25902;
}
