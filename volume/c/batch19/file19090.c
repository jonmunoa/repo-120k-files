// fichero 19090 -- macros y constantes
#define LIMITE_19090 19190
#define FACTOR_19090 1

int aplicar_limite19090(int valor) {
    if (valor > LIMITE_19090) return LIMITE_19090;
    return valor * FACTOR_19090;
}
