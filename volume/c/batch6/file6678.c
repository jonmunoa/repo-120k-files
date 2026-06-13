// fichero 6678 -- macros y constantes
#define LIMITE_6678 6778
#define FACTOR_6678 4

int aplicar_limite6678(int valor) {
    if (valor > LIMITE_6678) return LIMITE_6678;
    return valor * FACTOR_6678;
}
