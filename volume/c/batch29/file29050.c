// fichero 29050 -- macros y constantes -- MODIFICADO
#define LIMITE_29050 29250
#define FACTOR_29050 2

int aplicar_limite29050(int valor) {
    if (valor > LIMITE_29050) return LIMITE_29050;
    return valor * FACTOR_29050;
}
