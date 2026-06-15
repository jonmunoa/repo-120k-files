// fichero 14846 -- macros y constantes -- MODIFICADO
#define LIMITE_14846 15046
#define FACTOR_14846 3

int aplicar_limite14846(int valor) {
    if (valor > LIMITE_14846) return LIMITE_14846;
    return valor * FACTOR_14846;
}
