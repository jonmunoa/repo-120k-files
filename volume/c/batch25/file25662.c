// fichero 25662 -- macros y constantes
#define LIMITE_25662 25762
#define FACTOR_25662 3

int aplicar_limite25662(int valor) {
    if (valor > LIMITE_25662) return LIMITE_25662;
    return valor * FACTOR_25662;
}
