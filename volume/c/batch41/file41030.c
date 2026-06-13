// fichero 41030 -- macros y constantes
#define LIMITE_41030 41130
#define FACTOR_41030 1

int aplicar_limite41030(int valor) {
    if (valor > LIMITE_41030) return LIMITE_41030;
    return valor * FACTOR_41030;
}
