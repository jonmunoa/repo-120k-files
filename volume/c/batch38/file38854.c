// fichero 38854 -- macros y constantes
#define LIMITE_38854 38954
#define FACTOR_38854 5

int aplicar_limite38854(int valor) {
    if (valor > LIMITE_38854) return LIMITE_38854;
    return valor * FACTOR_38854;
}
