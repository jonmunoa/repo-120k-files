// fichero 53510 -- macros y constantes
#define LIMITE_53510 53610
#define FACTOR_53510 1

int aplicar_limite53510(int valor) {
    if (valor > LIMITE_53510) return LIMITE_53510;
    return valor * FACTOR_53510;
}
