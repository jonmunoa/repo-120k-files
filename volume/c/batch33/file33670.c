// fichero 33670 -- macros y constantes
#define LIMITE_33670 33770
#define FACTOR_33670 1

int aplicar_limite33670(int valor) {
    if (valor > LIMITE_33670) return LIMITE_33670;
    return valor * FACTOR_33670;
}
