// fichero 13198 -- macros y constantes
#define LIMITE_13198 13298
#define FACTOR_13198 4

int aplicar_limite13198(int valor) {
    if (valor > LIMITE_13198) return LIMITE_13198;
    return valor * FACTOR_13198;
}
