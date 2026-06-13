// fichero 45686 -- macros y constantes
#define LIMITE_45686 45786
#define FACTOR_45686 2

int aplicar_limite45686(int valor) {
    if (valor > LIMITE_45686) return LIMITE_45686;
    return valor * FACTOR_45686;
}
