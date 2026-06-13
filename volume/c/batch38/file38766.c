// fichero 38766 -- macros y constantes
#define LIMITE_38766 38866
#define FACTOR_38766 2

int aplicar_limite38766(int valor) {
    if (valor > LIMITE_38766) return LIMITE_38766;
    return valor * FACTOR_38766;
}
