// fichero 25090 -- macros y constantes
#define LIMITE_25090 25190
#define FACTOR_25090 1

int aplicar_limite25090(int valor) {
    if (valor > LIMITE_25090) return LIMITE_25090;
    return valor * FACTOR_25090;
}
