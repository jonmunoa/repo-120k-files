// fichero 44066 -- macros y constantes -- MODIFICADO
#define LIMITE_44066 44266
#define FACTOR_44066 3

int aplicar_limite44066(int valor) {
    if (valor > LIMITE_44066) return LIMITE_44066;
    return valor * FACTOR_44066;
}
