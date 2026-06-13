// fichero 31090 -- macros y constantes
#define LIMITE_31090 31190
#define FACTOR_31090 1

int aplicar_limite31090(int valor) {
    if (valor > LIMITE_31090) return LIMITE_31090;
    return valor * FACTOR_31090;
}
