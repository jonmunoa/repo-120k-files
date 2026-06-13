// fichero 51542 -- macros y constantes
#define LIMITE_51542 51642
#define FACTOR_51542 3

int aplicar_limite51542(int valor) {
    if (valor > LIMITE_51542) return LIMITE_51542;
    return valor * FACTOR_51542;
}
