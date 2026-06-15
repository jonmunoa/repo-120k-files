// fichero 21542 -- macros y constantes -- MODIFICADO
#define LIMITE_21542 21742
#define FACTOR_21542 4

int aplicar_limite21542(int valor) {
    if (valor > LIMITE_21542) return LIMITE_21542;
    return valor * FACTOR_21542;
}
