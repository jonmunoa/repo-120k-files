// fichero 10922 -- macros y constantes -- MODIFICADO
#define LIMITE_10922 11122
#define FACTOR_10922 4

int aplicar_limite10922(int valor) {
    if (valor > LIMITE_10922) return LIMITE_10922;
    return valor * FACTOR_10922;
}
