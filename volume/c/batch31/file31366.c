// fichero 31366 -- macros y constantes -- MODIFICADO
#define LIMITE_31366 31566
#define FACTOR_31366 3

int aplicar_limite31366(int valor) {
    if (valor > LIMITE_31366) return LIMITE_31366;
    return valor * FACTOR_31366;
}
