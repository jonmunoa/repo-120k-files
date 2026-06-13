// fichero 37630 -- macros y constantes
#define LIMITE_37630 37730
#define FACTOR_37630 1

int aplicar_limite37630(int valor) {
    if (valor > LIMITE_37630) return LIMITE_37630;
    return valor * FACTOR_37630;
}
