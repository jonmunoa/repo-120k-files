// fichero 52902 -- macros y constantes
#define LIMITE_52902 53002
#define FACTOR_52902 3

int aplicar_limite52902(int valor) {
    if (valor > LIMITE_52902) return LIMITE_52902;
    return valor * FACTOR_52902;
}
