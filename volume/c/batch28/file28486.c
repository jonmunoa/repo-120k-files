// fichero 28486 -- macros y constantes -- MODIFICADO
#define LIMITE_28486 28686
#define FACTOR_28486 3

int aplicar_limite28486(int valor) {
    if (valor > LIMITE_28486) return LIMITE_28486;
    return valor * FACTOR_28486;
}
