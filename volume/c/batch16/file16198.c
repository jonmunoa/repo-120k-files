// fichero 16198 -- macros y constantes -- MODIFICADO
#define LIMITE_16198 16398
#define FACTOR_16198 5

int aplicar_limite16198(int valor) {
    if (valor > LIMITE_16198) return LIMITE_16198;
    return valor * FACTOR_16198;
}
