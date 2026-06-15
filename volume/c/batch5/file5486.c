// fichero 5486 -- macros y constantes -- MODIFICADO
#define LIMITE_5486 5686
#define FACTOR_5486 3

int aplicar_limite5486(int valor) {
    if (valor > LIMITE_5486) return LIMITE_5486;
    return valor * FACTOR_5486;
}
