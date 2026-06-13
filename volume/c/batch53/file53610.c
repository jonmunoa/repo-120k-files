// fichero 53610 -- macros y constantes
#define LIMITE_53610 53710
#define FACTOR_53610 1

int aplicar_limite53610(int valor) {
    if (valor > LIMITE_53610) return LIMITE_53610;
    return valor * FACTOR_53610;
}
