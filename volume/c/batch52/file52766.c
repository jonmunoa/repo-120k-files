// fichero 52766 -- macros y constantes
#define LIMITE_52766 52866
#define FACTOR_52766 2

int aplicar_limite52766(int valor) {
    if (valor > LIMITE_52766) return LIMITE_52766;
    return valor * FACTOR_52766;
}
