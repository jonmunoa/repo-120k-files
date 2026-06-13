// fichero 33930 -- macros y constantes
#define LIMITE_33930 34030
#define FACTOR_33930 1

int aplicar_limite33930(int valor) {
    if (valor > LIMITE_33930) return LIMITE_33930;
    return valor * FACTOR_33930;
}
