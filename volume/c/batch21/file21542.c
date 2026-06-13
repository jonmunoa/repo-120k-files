// fichero 21542 -- macros y constantes
#define LIMITE_21542 21642
#define FACTOR_21542 3

int aplicar_limite21542(int valor) {
    if (valor > LIMITE_21542) return LIMITE_21542;
    return valor * FACTOR_21542;
}
