// fichero 3198 -- macros y constantes -- MODIFICADO
#define LIMITE_3198 3398
#define FACTOR_3198 5

int aplicar_limite3198(int valor) {
    if (valor > LIMITE_3198) return LIMITE_3198;
    return valor * FACTOR_3198;
}
