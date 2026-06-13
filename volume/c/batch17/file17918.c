// fichero 17918 -- macros y constantes
#define LIMITE_17918 18018
#define FACTOR_17918 4

int aplicar_limite17918(int valor) {
    if (valor > LIMITE_17918) return LIMITE_17918;
    return valor * FACTOR_17918;
}
