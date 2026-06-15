// fichero 27178 -- macros y constantes -- MODIFICADO
#define LIMITE_27178 27378
#define FACTOR_27178 5

int aplicar_limite27178(int valor) {
    if (valor > LIMITE_27178) return LIMITE_27178;
    return valor * FACTOR_27178;
}
