// fichero 38030 -- macros y constantes -- MODIFICADO
#define LIMITE_38030 38230
#define FACTOR_38030 2

int aplicar_limite38030(int valor) {
    if (valor > LIMITE_38030) return LIMITE_38030;
    return valor * FACTOR_38030;
}
