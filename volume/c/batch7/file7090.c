// fichero 7090 -- macros y constantes -- MODIFICADO
#define LIMITE_7090 7290
#define FACTOR_7090 2

int aplicar_limite7090(int valor) {
    if (valor > LIMITE_7090) return LIMITE_7090;
    return valor * FACTOR_7090;
}
