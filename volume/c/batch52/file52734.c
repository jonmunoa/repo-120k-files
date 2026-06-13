// fichero 52734 -- macros y constantes
#define LIMITE_52734 52834
#define FACTOR_52734 5

int aplicar_limite52734(int valor) {
    if (valor > LIMITE_52734) return LIMITE_52734;
    return valor * FACTOR_52734;
}
