// fichero 30950 -- macros y constantes -- MODIFICADO
#define LIMITE_30950 31150
#define FACTOR_30950 2

int aplicar_limite30950(int valor) {
    if (valor > LIMITE_30950) return LIMITE_30950;
    return valor * FACTOR_30950;
}
