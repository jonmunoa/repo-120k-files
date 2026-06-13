// fichero 33750 -- macros y constantes
#define LIMITE_33750 33850
#define FACTOR_33750 1

int aplicar_limite33750(int valor) {
    if (valor > LIMITE_33750) return LIMITE_33750;
    return valor * FACTOR_33750;
}
