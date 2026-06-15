// fichero 37486 -- macros y constantes -- MODIFICADO
#define LIMITE_37486 37686
#define FACTOR_37486 3

int aplicar_limite37486(int valor) {
    if (valor > LIMITE_37486) return LIMITE_37486;
    return valor * FACTOR_37486;
}
