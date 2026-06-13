// fichero 11934 -- macros y constantes
#define LIMITE_11934 12034
#define FACTOR_11934 5

int aplicar_limite11934(int valor) {
    if (valor > LIMITE_11934) return LIMITE_11934;
    return valor * FACTOR_11934;
}
