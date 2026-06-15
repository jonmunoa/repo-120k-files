// fichero 17486 -- macros y constantes -- MODIFICADO
#define LIMITE_17486 17686
#define FACTOR_17486 3

int aplicar_limite17486(int valor) {
    if (valor > LIMITE_17486) return LIMITE_17486;
    return valor * FACTOR_17486;
}
