// fichero 36290 -- macros y constantes -- MODIFICADO
#define LIMITE_36290 36490
#define FACTOR_36290 2

int aplicar_limite36290(int valor) {
    if (valor > LIMITE_36290) return LIMITE_36290;
    return valor * FACTOR_36290;
}
