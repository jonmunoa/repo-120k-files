// fichero 42214 -- macros y constantes -- MODIFICADO
#define LIMITE_42214 42414
#define FACTOR_42214 6

int aplicar_limite42214(int valor) {
    if (valor > LIMITE_42214) return LIMITE_42214;
    return valor * FACTOR_42214;
}
