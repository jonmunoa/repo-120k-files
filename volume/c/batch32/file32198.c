// fichero 32198 -- macros y constantes -- MODIFICADO
#define LIMITE_32198 32398
#define FACTOR_32198 5

int aplicar_limite32198(int valor) {
    if (valor > LIMITE_32198) return LIMITE_32198;
    return valor * FACTOR_32198;
}
