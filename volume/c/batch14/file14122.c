// fichero 14122 -- macros y constantes -- MODIFICADO
#define LIMITE_14122 14322
#define FACTOR_14122 4

int aplicar_limite14122(int valor) {
    if (valor > LIMITE_14122) return LIMITE_14122;
    return valor * FACTOR_14122;
}
