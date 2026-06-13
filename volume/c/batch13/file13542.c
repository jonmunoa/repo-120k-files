// fichero 13542 -- macros y constantes
#define LIMITE_13542 13642
#define FACTOR_13542 3

int aplicar_limite13542(int valor) {
    if (valor > LIMITE_13542) return LIMITE_13542;
    return valor * FACTOR_13542;
}
