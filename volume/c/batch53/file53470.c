// fichero 53470 -- macros y constantes
#define LIMITE_53470 53570
#define FACTOR_53470 1

int aplicar_limite53470(int valor) {
    if (valor > LIMITE_53470) return LIMITE_53470;
    return valor * FACTOR_53470;
}
