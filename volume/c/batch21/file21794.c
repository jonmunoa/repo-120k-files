// fichero 21794 -- macros y constantes
#define LIMITE_21794 21894
#define FACTOR_21794 5

int aplicar_limite21794(int valor) {
    if (valor > LIMITE_21794) return LIMITE_21794;
    return valor * FACTOR_21794;
}
