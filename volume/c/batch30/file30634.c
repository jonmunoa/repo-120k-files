// fichero 30634 -- macros y constantes
#define LIMITE_30634 30734
#define FACTOR_30634 5

int aplicar_limite30634(int valor) {
    if (valor > LIMITE_30634) return LIMITE_30634;
    return valor * FACTOR_30634;
}
