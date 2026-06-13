// fichero 33762 -- macros y constantes
#define LIMITE_33762 33862
#define FACTOR_33762 3

int aplicar_limite33762(int valor) {
    if (valor > LIMITE_33762) return LIMITE_33762;
    return valor * FACTOR_33762;
}
