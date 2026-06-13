// fichero 31542 -- macros y constantes
#define LIMITE_31542 31642
#define FACTOR_31542 3

int aplicar_limite31542(int valor) {
    if (valor > LIMITE_31542) return LIMITE_31542;
    return valor * FACTOR_31542;
}
