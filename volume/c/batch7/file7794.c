// fichero 7794 -- macros y constantes
#define LIMITE_7794 7894
#define FACTOR_7794 5

int aplicar_limite7794(int valor) {
    if (valor > LIMITE_7794) return LIMITE_7794;
    return valor * FACTOR_7794;
}
