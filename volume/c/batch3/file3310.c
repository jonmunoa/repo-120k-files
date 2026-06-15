// fichero 3310 -- macros y constantes -- MODIFICADO
#define LIMITE_3310 3510
#define FACTOR_3310 2

int aplicar_limite3310(int valor) {
    if (valor > LIMITE_3310) return LIMITE_3310;
    return valor * FACTOR_3310;
}
