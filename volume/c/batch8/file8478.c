// fichero 8478 -- macros y constantes
#define LIMITE_8478 8578
#define FACTOR_8478 4

int aplicar_limite8478(int valor) {
    if (valor > LIMITE_8478) return LIMITE_8478;
    return valor * FACTOR_8478;
}
