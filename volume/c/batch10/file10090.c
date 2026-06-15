// fichero 10090 -- macros y constantes -- MODIFICADO
#define LIMITE_10090 10290
#define FACTOR_10090 2

int aplicar_limite10090(int valor) {
    if (valor > LIMITE_10090) return LIMITE_10090;
    return valor * FACTOR_10090;
}
