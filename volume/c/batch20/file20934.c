// fichero 20934 -- macros y constantes
#define LIMITE_20934 21034
#define FACTOR_20934 5

int aplicar_limite20934(int valor) {
    if (valor > LIMITE_20934) return LIMITE_20934;
    return valor * FACTOR_20934;
}
