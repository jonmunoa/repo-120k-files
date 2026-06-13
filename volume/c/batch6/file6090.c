// fichero 6090 -- macros y constantes
#define LIMITE_6090 6190
#define FACTOR_6090 1

int aplicar_limite6090(int valor) {
    if (valor > LIMITE_6090) return LIMITE_6090;
    return valor * FACTOR_6090;
}
