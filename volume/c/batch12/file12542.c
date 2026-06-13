// fichero 12542 -- macros y constantes
#define LIMITE_12542 12642
#define FACTOR_12542 3

int aplicar_limite12542(int valor) {
    if (valor > LIMITE_12542) return LIMITE_12542;
    return valor * FACTOR_12542;
}
