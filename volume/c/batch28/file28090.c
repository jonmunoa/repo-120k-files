// fichero 28090 -- macros y constantes
#define LIMITE_28090 28190
#define FACTOR_28090 1

int aplicar_limite28090(int valor) {
    if (valor > LIMITE_28090) return LIMITE_28090;
    return valor * FACTOR_28090;
}
