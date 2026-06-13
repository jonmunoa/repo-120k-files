// fichero 11958 -- macros y constantes
#define LIMITE_11958 12058
#define FACTOR_11958 4

int aplicar_limite11958(int valor) {
    if (valor > LIMITE_11958) return LIMITE_11958;
    return valor * FACTOR_11958;
}
