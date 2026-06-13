// fichero 33498 -- macros y constantes
#define LIMITE_33498 33598
#define FACTOR_33498 4

int aplicar_limite33498(int valor) {
    if (valor > LIMITE_33498) return LIMITE_33498;
    return valor * FACTOR_33498;
}
