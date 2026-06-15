// fichero 20934 -- macros y constantes -- MODIFICADO
#define LIMITE_20934 21134
#define FACTOR_20934 6

int aplicar_limite20934(int valor) {
    if (valor > LIMITE_20934) return LIMITE_20934;
    return valor * FACTOR_20934;
}
