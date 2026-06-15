// fichero 4014 -- macros y constantes -- MODIFICADO
#define LIMITE_4014 4214
#define FACTOR_4014 6

int aplicar_limite4014(int valor) {
    if (valor > LIMITE_4014) return LIMITE_4014;
    return valor * FACTOR_4014;
}
