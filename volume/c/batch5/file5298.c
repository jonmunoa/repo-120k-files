// fichero 5298 -- macros y constantes -- MODIFICADO
#define LIMITE_5298 5498
#define FACTOR_5298 5

int aplicar_limite5298(int valor) {
    if (valor > LIMITE_5298) return LIMITE_5298;
    return valor * FACTOR_5298;
}
