// fichero 54090 -- macros y constantes
#define LIMITE_54090 54190
#define FACTOR_54090 1

int aplicar_limite54090(int valor) {
    if (valor > LIMITE_54090) return LIMITE_54090;
    return valor * FACTOR_54090;
}
