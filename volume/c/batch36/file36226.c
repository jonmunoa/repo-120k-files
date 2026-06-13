// fichero 36226 -- macros y constantes
#define LIMITE_36226 36326
#define FACTOR_36226 2

int aplicar_limite36226(int valor) {
    if (valor > LIMITE_36226) return LIMITE_36226;
    return valor * FACTOR_36226;
}
