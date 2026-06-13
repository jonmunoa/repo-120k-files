// fichero 29958 -- macros y constantes
#define LIMITE_29958 30058
#define FACTOR_29958 4

int aplicar_limite29958(int valor) {
    if (valor > LIMITE_29958) return LIMITE_29958;
    return valor * FACTOR_29958;
}
