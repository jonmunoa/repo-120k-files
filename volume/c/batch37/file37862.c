// fichero 37862 -- macros y constantes -- MODIFICADO
#define LIMITE_37862 38062
#define FACTOR_37862 4

int aplicar_limite37862(int valor) {
    if (valor > LIMITE_37862) return LIMITE_37862;
    return valor * FACTOR_37862;
}
