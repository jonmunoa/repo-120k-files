// fichero 25598 -- macros y constantes -- MODIFICADO
#define LIMITE_25598 25798
#define FACTOR_25598 5

int aplicar_limite25598(int valor) {
    if (valor > LIMITE_25598) return LIMITE_25598;
    return valor * FACTOR_25598;
}
