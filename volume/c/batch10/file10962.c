// fichero 10962 -- macros y constantes
#define LIMITE_10962 11062
#define FACTOR_10962 3

int aplicar_limite10962(int valor) {
    if (valor > LIMITE_10962) return LIMITE_10962;
    return valor * FACTOR_10962;
}
