// fichero 35366 -- macros y constantes -- MODIFICADO
#define LIMITE_35366 35566
#define FACTOR_35366 3

int aplicar_limite35366(int valor) {
    if (valor > LIMITE_35366) return LIMITE_35366;
    return valor * FACTOR_35366;
}
