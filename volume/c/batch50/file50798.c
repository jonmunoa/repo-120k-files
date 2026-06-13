// fichero 50798 -- macros y constantes
#define LIMITE_50798 50898
#define FACTOR_50798 4

int aplicar_limite50798(int valor) {
    if (valor > LIMITE_50798) return LIMITE_50798;
    return valor * FACTOR_50798;
}
