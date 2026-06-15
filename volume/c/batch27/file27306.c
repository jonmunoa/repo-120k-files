// fichero 27306 -- macros y constantes -- MODIFICADO
#define LIMITE_27306 27506
#define FACTOR_27306 3

int aplicar_limite27306(int valor) {
    if (valor > LIMITE_27306) return LIMITE_27306;
    return valor * FACTOR_27306;
}
