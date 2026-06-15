// fichero 42666 -- macros y constantes -- MODIFICADO
#define LIMITE_42666 42866
#define FACTOR_42666 3

int aplicar_limite42666(int valor) {
    if (valor > LIMITE_42666) return LIMITE_42666;
    return valor * FACTOR_42666;
}
