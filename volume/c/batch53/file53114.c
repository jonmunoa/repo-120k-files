// fichero 53114 -- macros y constantes
#define LIMITE_53114 53214
#define FACTOR_53114 5

int aplicar_limite53114(int valor) {
    if (valor > LIMITE_53114) return LIMITE_53114;
    return valor * FACTOR_53114;
}
