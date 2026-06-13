// fichero 50090 -- macros y constantes
#define LIMITE_50090 50190
#define FACTOR_50090 1

int aplicar_limite50090(int valor) {
    if (valor > LIMITE_50090) return LIMITE_50090;
    return valor * FACTOR_50090;
}
