// fichero 35210 -- macros y constantes
#define LIMITE_35210 35310
#define FACTOR_35210 1

int aplicar_limite35210(int valor) {
    if (valor > LIMITE_35210) return LIMITE_35210;
    return valor * FACTOR_35210;
}
