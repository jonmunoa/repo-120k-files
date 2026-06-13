// fichero 11254 -- macros y constantes
#define LIMITE_11254 11354
#define FACTOR_11254 5

int aplicar_limite11254(int valor) {
    if (valor > LIMITE_11254) return LIMITE_11254;
    return valor * FACTOR_11254;
}
