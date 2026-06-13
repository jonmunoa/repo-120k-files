// fichero 41542 -- macros y constantes
#define LIMITE_41542 41642
#define FACTOR_41542 3

int aplicar_limite41542(int valor) {
    if (valor > LIMITE_41542) return LIMITE_41542;
    return valor * FACTOR_41542;
}
