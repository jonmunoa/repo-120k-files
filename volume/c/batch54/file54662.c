// fichero 54662 -- macros y constantes
#define LIMITE_54662 54762
#define FACTOR_54662 3

int aplicar_limite54662(int valor) {
    if (valor > LIMITE_54662) return LIMITE_54662;
    return valor * FACTOR_54662;
}
