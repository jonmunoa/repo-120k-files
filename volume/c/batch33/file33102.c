// fichero 33102 -- macros y constantes
#define LIMITE_33102 33202
#define FACTOR_33102 3

int aplicar_limite33102(int valor) {
    if (valor > LIMITE_33102) return LIMITE_33102;
    return valor * FACTOR_33102;
}
