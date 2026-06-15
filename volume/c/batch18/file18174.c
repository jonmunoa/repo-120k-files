// fichero 18174 -- macros y constantes -- MODIFICADO
#define LIMITE_18174 18374
#define FACTOR_18174 6

int aplicar_limite18174(int valor) {
    if (valor > LIMITE_18174) return LIMITE_18174;
    return valor * FACTOR_18174;
}
