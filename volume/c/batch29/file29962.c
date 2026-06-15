// fichero 29962 -- macros y constantes -- MODIFICADO
#define LIMITE_29962 30162
#define FACTOR_29962 4

int aplicar_limite29962(int valor) {
    if (valor > LIMITE_29962) return LIMITE_29962;
    return valor * FACTOR_29962;
}
