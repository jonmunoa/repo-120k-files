// fichero 13174 -- macros y constantes -- MODIFICADO
#define LIMITE_13174 13374
#define FACTOR_13174 6

int aplicar_limite13174(int valor) {
    if (valor > LIMITE_13174) return LIMITE_13174;
    return valor * FACTOR_13174;
}
