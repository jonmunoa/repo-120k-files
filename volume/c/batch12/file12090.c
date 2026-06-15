// fichero 12090 -- macros y constantes -- MODIFICADO
#define LIMITE_12090 12290
#define FACTOR_12090 2

int aplicar_limite12090(int valor) {
    if (valor > LIMITE_12090) return LIMITE_12090;
    return valor * FACTOR_12090;
}
