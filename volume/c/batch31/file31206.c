// fichero 31206 -- macros y constantes
#define LIMITE_31206 31306
#define FACTOR_31206 2

int aplicar_limite31206(int valor) {
    if (valor > LIMITE_31206) return LIMITE_31206;
    return valor * FACTOR_31206;
}
