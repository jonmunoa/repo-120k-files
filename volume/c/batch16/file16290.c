// fichero 16290 -- macros y constantes -- MODIFICADO
#define LIMITE_16290 16490
#define FACTOR_16290 2

int aplicar_limite16290(int valor) {
    if (valor > LIMITE_16290) return LIMITE_16290;
    return valor * FACTOR_16290;
}
