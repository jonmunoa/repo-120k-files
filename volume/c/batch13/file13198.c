// fichero 13198 -- macros y constantes -- MODIFICADO
#define LIMITE_13198 13398
#define FACTOR_13198 5

int aplicar_limite13198(int valor) {
    if (valor > LIMITE_13198) return LIMITE_13198;
    return valor * FACTOR_13198;
}
