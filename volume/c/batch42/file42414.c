// fichero 42414 -- macros y constantes -- MODIFICADO
#define LIMITE_42414 42614
#define FACTOR_42414 6

int aplicar_limite42414(int valor) {
    if (valor > LIMITE_42414) return LIMITE_42414;
    return valor * FACTOR_42414;
}
