// fichero 50498 -- macros y constantes
#define LIMITE_50498 50598
#define FACTOR_50498 4

int aplicar_limite50498(int valor) {
    if (valor > LIMITE_50498) return LIMITE_50498;
    return valor * FACTOR_50498;
}
