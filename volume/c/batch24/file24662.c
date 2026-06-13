// fichero 24662 -- macros y constantes
#define LIMITE_24662 24762
#define FACTOR_24662 3

int aplicar_limite24662(int valor) {
    if (valor > LIMITE_24662) return LIMITE_24662;
    return valor * FACTOR_24662;
}
