// fichero 32250 -- macros y constantes
#define LIMITE_32250 32350
#define FACTOR_32250 1

int aplicar_limite32250(int valor) {
    if (valor > LIMITE_32250) return LIMITE_32250;
    return valor * FACTOR_32250;
}
