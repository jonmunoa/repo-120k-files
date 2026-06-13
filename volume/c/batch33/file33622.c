// fichero 33622 -- macros y constantes
#define LIMITE_33622 33722
#define FACTOR_33622 3

int aplicar_limite33622(int valor) {
    if (valor > LIMITE_33622) return LIMITE_33622;
    return valor * FACTOR_33622;
}
