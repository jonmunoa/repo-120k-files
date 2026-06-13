// fichero 30290 -- macros y constantes
#define LIMITE_30290 30390
#define FACTOR_30290 1

int aplicar_limite30290(int valor) {
    if (valor > LIMITE_30290) return LIMITE_30290;
    return valor * FACTOR_30290;
}
