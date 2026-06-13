// fichero 45282 -- macros y constantes
#define LIMITE_45282 45382
#define FACTOR_45282 3

int aplicar_limite45282(int valor) {
    if (valor > LIMITE_45282) return LIMITE_45282;
    return valor * FACTOR_45282;
}
