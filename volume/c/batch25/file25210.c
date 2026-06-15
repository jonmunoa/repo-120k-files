// fichero 25210 -- macros y constantes -- MODIFICADO
#define LIMITE_25210 25410
#define FACTOR_25210 2

int aplicar_limite25210(int valor) {
    if (valor > LIMITE_25210) return LIMITE_25210;
    return valor * FACTOR_25210;
}
