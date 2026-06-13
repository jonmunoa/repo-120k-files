// fichero 15938 -- macros y constantes
#define LIMITE_15938 16038
#define FACTOR_15938 4

int aplicar_limite15938(int valor) {
    if (valor > LIMITE_15938) return LIMITE_15938;
    return valor * FACTOR_15938;
}
