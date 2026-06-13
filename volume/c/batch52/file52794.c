// fichero 52794 -- macros y constantes
#define LIMITE_52794 52894
#define FACTOR_52794 5

int aplicar_limite52794(int valor) {
    if (valor > LIMITE_52794) return LIMITE_52794;
    return valor * FACTOR_52794;
}
