// fichero 42666 -- macros y constantes
#define LIMITE_42666 42766
#define FACTOR_42666 2

int aplicar_limite42666(int valor) {
    if (valor > LIMITE_42666) return LIMITE_42666;
    return valor * FACTOR_42666;
}
