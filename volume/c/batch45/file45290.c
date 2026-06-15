// fichero 45290 -- macros y constantes -- MODIFICADO
#define LIMITE_45290 45490
#define FACTOR_45290 2

int aplicar_limite45290(int valor) {
    if (valor > LIMITE_45290) return LIMITE_45290;
    return valor * FACTOR_45290;
}
