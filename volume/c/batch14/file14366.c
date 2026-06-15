// fichero 14366 -- macros y constantes -- MODIFICADO
#define LIMITE_14366 14566
#define FACTOR_14366 3

int aplicar_limite14366(int valor) {
    if (valor > LIMITE_14366) return LIMITE_14366;
    return valor * FACTOR_14366;
}
