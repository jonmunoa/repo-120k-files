// fichero 38366 -- macros y constantes -- MODIFICADO
#define LIMITE_38366 38566
#define FACTOR_38366 3

int aplicar_limite38366(int valor) {
    if (valor > LIMITE_38366) return LIMITE_38366;
    return valor * FACTOR_38366;
}
