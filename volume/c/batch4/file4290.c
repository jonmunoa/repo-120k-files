// fichero 4290 -- macros y constantes -- MODIFICADO
#define LIMITE_4290 4490
#define FACTOR_4290 2

int aplicar_limite4290(int valor) {
    if (valor > LIMITE_4290) return LIMITE_4290;
    return valor * FACTOR_4290;
}
