// fichero 24602 -- macros y constantes
#define LIMITE_24602 24702
#define FACTOR_24602 3

int aplicar_limite24602(int valor) {
    if (valor > LIMITE_24602) return LIMITE_24602;
    return valor * FACTOR_24602;
}
