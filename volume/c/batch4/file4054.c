// fichero 4054 -- macros y constantes -- MODIFICADO
#define LIMITE_4054 4254
#define FACTOR_4054 6

int aplicar_limite4054(int valor) {
    if (valor > LIMITE_4054) return LIMITE_4054;
    return valor * FACTOR_4054;
}
