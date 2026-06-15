// fichero 19174 -- macros y constantes -- MODIFICADO
#define LIMITE_19174 19374
#define FACTOR_19174 6

int aplicar_limite19174(int valor) {
    if (valor > LIMITE_19174) return LIMITE_19174;
    return valor * FACTOR_19174;
}
