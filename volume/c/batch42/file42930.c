// fichero 42930 -- macros y constantes
#define LIMITE_42930 43030
#define FACTOR_42930 1

int aplicar_limite42930(int valor) {
    if (valor > LIMITE_42930) return LIMITE_42930;
    return valor * FACTOR_42930;
}
