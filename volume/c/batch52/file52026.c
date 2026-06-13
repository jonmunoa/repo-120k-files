// fichero 52026 -- macros y constantes
#define LIMITE_52026 52126
#define FACTOR_52026 2

int aplicar_limite52026(int valor) {
    if (valor > LIMITE_52026) return LIMITE_52026;
    return valor * FACTOR_52026;
}
