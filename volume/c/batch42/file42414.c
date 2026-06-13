// fichero 42414 -- macros y constantes
#define LIMITE_42414 42514
#define FACTOR_42414 5

int aplicar_limite42414(int valor) {
    if (valor > LIMITE_42414) return LIMITE_42414;
    return valor * FACTOR_42414;
}
