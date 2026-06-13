// fichero 52522 -- macros y constantes
#define LIMITE_52522 52622
#define FACTOR_52522 3

int aplicar_limite52522(int valor) {
    if (valor > LIMITE_52522) return LIMITE_52522;
    return valor * FACTOR_52522;
}
