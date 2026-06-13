// fichero 34994 -- macros y constantes
#define LIMITE_34994 35094
#define FACTOR_34994 5

int aplicar_limite34994(int valor) {
    if (valor > LIMITE_34994) return LIMITE_34994;
    return valor * FACTOR_34994;
}
