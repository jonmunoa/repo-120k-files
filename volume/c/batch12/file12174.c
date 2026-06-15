// fichero 12174 -- macros y constantes -- MODIFICADO
#define LIMITE_12174 12374
#define FACTOR_12174 6

int aplicar_limite12174(int valor) {
    if (valor > LIMITE_12174) return LIMITE_12174;
    return valor * FACTOR_12174;
}
