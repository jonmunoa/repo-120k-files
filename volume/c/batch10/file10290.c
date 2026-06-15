// fichero 10290 -- macros y constantes -- MODIFICADO
#define LIMITE_10290 10490
#define FACTOR_10290 2

int aplicar_limite10290(int valor) {
    if (valor > LIMITE_10290) return LIMITE_10290;
    return valor * FACTOR_10290;
}
