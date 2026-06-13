// fichero 51994 -- macros y constantes
#define LIMITE_51994 52094
#define FACTOR_51994 5

int aplicar_limite51994(int valor) {
    if (valor > LIMITE_51994) return LIMITE_51994;
    return valor * FACTOR_51994;
}
