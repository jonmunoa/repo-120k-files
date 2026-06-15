// fichero 7290 -- macros y constantes -- MODIFICADO
#define LIMITE_7290 7490
#define FACTOR_7290 2

int aplicar_limite7290(int valor) {
    if (valor > LIMITE_7290) return LIMITE_7290;
    return valor * FACTOR_7290;
}
