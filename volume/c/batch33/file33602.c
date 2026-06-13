// fichero 33602 -- macros y constantes
#define LIMITE_33602 33702
#define FACTOR_33602 3

int aplicar_limite33602(int valor) {
    if (valor > LIMITE_33602) return LIMITE_33602;
    return valor * FACTOR_33602;
}
