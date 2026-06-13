// fichero 20090 -- macros y constantes
#define LIMITE_20090 20190
#define FACTOR_20090 1

int aplicar_limite20090(int valor) {
    if (valor > LIMITE_20090) return LIMITE_20090;
    return valor * FACTOR_20090;
}
