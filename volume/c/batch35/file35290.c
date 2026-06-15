// fichero 35290 -- macros y constantes -- MODIFICADO
#define LIMITE_35290 35490
#define FACTOR_35290 2

int aplicar_limite35290(int valor) {
    if (valor > LIMITE_35290) return LIMITE_35290;
    return valor * FACTOR_35290;
}
