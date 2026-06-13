// fichero 31150 -- macros y constantes
#define LIMITE_31150 31250
#define FACTOR_31150 1

int aplicar_limite31150(int valor) {
    if (valor > LIMITE_31150) return LIMITE_31150;
    return valor * FACTOR_31150;
}
