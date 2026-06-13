// fichero 32090 -- macros y constantes
#define LIMITE_32090 32190
#define FACTOR_32090 1

int aplicar_limite32090(int valor) {
    if (valor > LIMITE_32090) return LIMITE_32090;
    return valor * FACTOR_32090;
}
