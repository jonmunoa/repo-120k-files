// fichero 33990 -- macros y constantes
#define LIMITE_33990 34090
#define FACTOR_33990 1

int aplicar_limite33990(int valor) {
    if (valor > LIMITE_33990) return LIMITE_33990;
    return valor * FACTOR_33990;
}
