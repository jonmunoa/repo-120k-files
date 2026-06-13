// fichero 10922 -- macros y constantes
#define LIMITE_10922 11022
#define FACTOR_10922 3

int aplicar_limite10922(int valor) {
    if (valor > LIMITE_10922) return LIMITE_10922;
    return valor * FACTOR_10922;
}
