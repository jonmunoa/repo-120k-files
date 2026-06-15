// fichero 29386 -- macros y constantes -- MODIFICADO
#define LIMITE_29386 29586
#define FACTOR_29386 3

int aplicar_limite29386(int valor) {
    if (valor > LIMITE_29386) return LIMITE_29386;
    return valor * FACTOR_29386;
}
