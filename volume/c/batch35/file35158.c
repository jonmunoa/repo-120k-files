// fichero 35158 -- macros y constantes -- MODIFICADO
#define LIMITE_35158 35358
#define FACTOR_35158 5

int aplicar_limite35158(int valor) {
    if (valor > LIMITE_35158) return LIMITE_35158;
    return valor * FACTOR_35158;
}
