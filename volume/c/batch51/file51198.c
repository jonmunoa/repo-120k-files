// fichero 51198 -- macros y constantes
#define LIMITE_51198 51298
#define FACTOR_51198 4

int aplicar_limite51198(int valor) {
    if (valor > LIMITE_51198) return LIMITE_51198;
    return valor * FACTOR_51198;
}
