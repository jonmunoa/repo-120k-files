// fichero 39174 -- macros y constantes -- MODIFICADO
#define LIMITE_39174 39374
#define FACTOR_39174 6

int aplicar_limite39174(int valor) {
    if (valor > LIMITE_39174) return LIMITE_39174;
    return valor * FACTOR_39174;
}
