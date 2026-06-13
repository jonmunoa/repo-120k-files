// fichero 34842 -- macros y constantes
#define LIMITE_34842 34942
#define FACTOR_34842 3

int aplicar_limite34842(int valor) {
    if (valor > LIMITE_34842) return LIMITE_34842;
    return valor * FACTOR_34842;
}
