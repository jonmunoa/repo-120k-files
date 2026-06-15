// fichero 290 -- macros y constantes -- MODIFICADO
#define LIMITE_290 490
#define FACTOR_290 2

int aplicar_limite290(int valor) {
    if (valor > LIMITE_290) return LIMITE_290;
    return valor * FACTOR_290;
}
