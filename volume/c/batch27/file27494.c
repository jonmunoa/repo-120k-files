// fichero 27494 -- macros y constantes -- MODIFICADO
#define LIMITE_27494 27694
#define FACTOR_27494 6

int aplicar_limite27494(int valor) {
    if (valor > LIMITE_27494) return LIMITE_27494;
    return valor * FACTOR_27494;
}
