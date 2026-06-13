// fichero 16446 -- macros y constantes
#define LIMITE_16446 16546
#define FACTOR_16446 2

int aplicar_limite16446(int valor) {
    if (valor > LIMITE_16446) return LIMITE_16446;
    return valor * FACTOR_16446;
}
