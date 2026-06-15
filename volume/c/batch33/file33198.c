// fichero 33198 -- macros y constantes -- MODIFICADO
#define LIMITE_33198 33398
#define FACTOR_33198 5

int aplicar_limite33198(int valor) {
    if (valor > LIMITE_33198) return LIMITE_33198;
    return valor * FACTOR_33198;
}
