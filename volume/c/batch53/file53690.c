// fichero 53690 -- macros y constantes
#define LIMITE_53690 53790
#define FACTOR_53690 1

int aplicar_limite53690(int valor) {
    if (valor > LIMITE_53690) return LIMITE_53690;
    return valor * FACTOR_53690;
}
