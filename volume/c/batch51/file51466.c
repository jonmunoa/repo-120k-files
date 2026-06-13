// fichero 51466 -- macros y constantes
#define LIMITE_51466 51566
#define FACTOR_51466 2

int aplicar_limite51466(int valor) {
    if (valor > LIMITE_51466) return LIMITE_51466;
    return valor * FACTOR_51466;
}
