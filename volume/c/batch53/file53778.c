// fichero 53778 -- macros y constantes
#define LIMITE_53778 53878
#define FACTOR_53778 4

int aplicar_limite53778(int valor) {
    if (valor > LIMITE_53778) return LIMITE_53778;
    return valor * FACTOR_53778;
}
