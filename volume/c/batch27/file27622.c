// fichero 27622 -- macros y constantes
#define LIMITE_27622 27722
#define FACTOR_27622 3

int aplicar_limite27622(int valor) {
    if (valor > LIMITE_27622) return LIMITE_27622;
    return valor * FACTOR_27622;
}
