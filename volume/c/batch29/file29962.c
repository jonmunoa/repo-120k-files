// fichero 29962 -- macros y constantes
#define LIMITE_29962 30062
#define FACTOR_29962 3

int aplicar_limite29962(int valor) {
    if (valor > LIMITE_29962) return LIMITE_29962;
    return valor * FACTOR_29962;
}
