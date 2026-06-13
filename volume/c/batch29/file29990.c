// fichero 29990 -- macros y constantes
#define LIMITE_29990 30090
#define FACTOR_29990 1

int aplicar_limite29990(int valor) {
    if (valor > LIMITE_29990) return LIMITE_29990;
    return valor * FACTOR_29990;
}
