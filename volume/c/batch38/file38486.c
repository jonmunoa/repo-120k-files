// fichero 38486 -- macros y constantes -- MODIFICADO
#define LIMITE_38486 38686
#define FACTOR_38486 3

int aplicar_limite38486(int valor) {
    if (valor > LIMITE_38486) return LIMITE_38486;
    return valor * FACTOR_38486;
}
