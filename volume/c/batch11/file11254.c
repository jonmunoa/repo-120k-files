// fichero 11254 -- macros y constantes -- MODIFICADO
#define LIMITE_11254 11454
#define FACTOR_11254 6

int aplicar_limite11254(int valor) {
    if (valor > LIMITE_11254) return LIMITE_11254;
    return valor * FACTOR_11254;
}
