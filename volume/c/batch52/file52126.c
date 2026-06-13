// fichero 52126 -- macros y constantes
#define LIMITE_52126 52226
#define FACTOR_52126 2

int aplicar_limite52126(int valor) {
    if (valor > LIMITE_52126) return LIMITE_52126;
    return valor * FACTOR_52126;
}
