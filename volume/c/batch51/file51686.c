// fichero 51686 -- macros y constantes
#define LIMITE_51686 51786
#define FACTOR_51686 2

int aplicar_limite51686(int valor) {
    if (valor > LIMITE_51686) return LIMITE_51686;
    return valor * FACTOR_51686;
}
