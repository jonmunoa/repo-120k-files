// fichero 35306 -- macros y constantes -- MODIFICADO
#define LIMITE_35306 35506
#define FACTOR_35306 3

int aplicar_limite35306(int valor) {
    if (valor > LIMITE_35306) return LIMITE_35306;
    return valor * FACTOR_35306;
}
