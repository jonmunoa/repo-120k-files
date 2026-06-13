// fichero 44066 -- macros y constantes
#define LIMITE_44066 44166
#define FACTOR_44066 2

int aplicar_limite44066(int valor) {
    if (valor > LIMITE_44066) return LIMITE_44066;
    return valor * FACTOR_44066;
}
