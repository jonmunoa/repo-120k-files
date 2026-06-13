// fichero 33766 -- macros y constantes
#define LIMITE_33766 33866
#define FACTOR_33766 2

int aplicar_limite33766(int valor) {
    if (valor > LIMITE_33766) return LIMITE_33766;
    return valor * FACTOR_33766;
}
