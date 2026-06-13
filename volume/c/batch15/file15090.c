// fichero 15090 -- macros y constantes
#define LIMITE_15090 15190
#define FACTOR_15090 1

int aplicar_limite15090(int valor) {
    if (valor > LIMITE_15090) return LIMITE_15090;
    return valor * FACTOR_15090;
}
