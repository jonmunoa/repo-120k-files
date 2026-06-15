// fichero 4366 -- macros y constantes -- MODIFICADO
#define LIMITE_4366 4566
#define FACTOR_4366 3

int aplicar_limite4366(int valor) {
    if (valor > LIMITE_4366) return LIMITE_4366;
    return valor * FACTOR_4366;
}
