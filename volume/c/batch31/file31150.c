// fichero 31150 -- macros y constantes -- MODIFICADO
#define LIMITE_31150 31350
#define FACTOR_31150 2

int aplicar_limite31150(int valor) {
    if (valor > LIMITE_31150) return LIMITE_31150;
    return valor * FACTOR_31150;
}
