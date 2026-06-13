// fichero 29162 -- macros y constantes
#define LIMITE_29162 29262
#define FACTOR_29162 3

int aplicar_limite29162(int valor) {
    if (valor > LIMITE_29162) return LIMITE_29162;
    return valor * FACTOR_29162;
}
