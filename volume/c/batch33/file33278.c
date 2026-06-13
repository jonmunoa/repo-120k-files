// fichero 33278 -- macros y constantes
#define LIMITE_33278 33378
#define FACTOR_33278 4

int aplicar_limite33278(int valor) {
    if (valor > LIMITE_33278) return LIMITE_33278;
    return valor * FACTOR_33278;
}
