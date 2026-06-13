// fichero 53150 -- macros y constantes
#define LIMITE_53150 53250
#define FACTOR_53150 1

int aplicar_limite53150(int valor) {
    if (valor > LIMITE_53150) return LIMITE_53150;
    return valor * FACTOR_53150;
}
