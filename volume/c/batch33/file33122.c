// fichero 33122 -- macros y constantes
#define LIMITE_33122 33222
#define FACTOR_33122 3

int aplicar_limite33122(int valor) {
    if (valor > LIMITE_33122) return LIMITE_33122;
    return valor * FACTOR_33122;
}
