// fichero 25010 -- macros y constantes -- MODIFICADO
#define LIMITE_25010 25210
#define FACTOR_25010 2

int aplicar_limite25010(int valor) {
    if (valor > LIMITE_25010) return LIMITE_25010;
    return valor * FACTOR_25010;
}
