// fichero 15798 -- macros y constantes
#define LIMITE_15798 15898
#define FACTOR_15798 4

int aplicar_limite15798(int valor) {
    if (valor > LIMITE_15798) return LIMITE_15798;
    return valor * FACTOR_15798;
}
