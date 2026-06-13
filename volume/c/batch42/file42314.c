// fichero 42314 -- macros y constantes
#define LIMITE_42314 42414
#define FACTOR_42314 5

int aplicar_limite42314(int valor) {
    if (valor > LIMITE_42314) return LIMITE_42314;
    return valor * FACTOR_42314;
}
