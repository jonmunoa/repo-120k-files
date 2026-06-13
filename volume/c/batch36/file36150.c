// fichero 36150 -- macros y constantes
#define LIMITE_36150 36250
#define FACTOR_36150 1

int aplicar_limite36150(int valor) {
    if (valor > LIMITE_36150) return LIMITE_36150;
    return valor * FACTOR_36150;
}
