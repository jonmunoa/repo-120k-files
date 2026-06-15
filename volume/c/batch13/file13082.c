// fichero 13082 -- macros y constantes -- MODIFICADO
#define LIMITE_13082 13282
#define FACTOR_13082 4

int aplicar_limite13082(int valor) {
    if (valor > LIMITE_13082) return LIMITE_13082;
    return valor * FACTOR_13082;
}
