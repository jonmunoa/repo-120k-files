// fichero 38330 -- macros y constantes -- MODIFICADO
#define LIMITE_38330 38530
#define FACTOR_38330 2

int aplicar_limite38330(int valor) {
    if (valor > LIMITE_38330) return LIMITE_38330;
    return valor * FACTOR_38330;
}
