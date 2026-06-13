// fichero 53430 -- macros y constantes
#define LIMITE_53430 53530
#define FACTOR_53430 1

int aplicar_limite53430(int valor) {
    if (valor > LIMITE_53430) return LIMITE_53430;
    return valor * FACTOR_53430;
}
