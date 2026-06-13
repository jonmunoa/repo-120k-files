// fichero 42214 -- macros y constantes
#define LIMITE_42214 42314
#define FACTOR_42214 5

int aplicar_limite42214(int valor) {
    if (valor > LIMITE_42214) return LIMITE_42214;
    return valor * FACTOR_42214;
}
