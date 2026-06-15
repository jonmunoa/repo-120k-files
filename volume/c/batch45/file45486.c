// fichero 45486 -- macros y constantes -- MODIFICADO
#define LIMITE_45486 45686
#define FACTOR_45486 3

int aplicar_limite45486(int valor) {
    if (valor > LIMITE_45486) return LIMITE_45486;
    return valor * FACTOR_45486;
}
