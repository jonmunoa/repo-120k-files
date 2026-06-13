// fichero 38366 -- macros y constantes
#define LIMITE_38366 38466
#define FACTOR_38366 2

int aplicar_limite38366(int valor) {
    if (valor > LIMITE_38366) return LIMITE_38366;
    return valor * FACTOR_38366;
}
