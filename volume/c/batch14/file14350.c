// fichero 14350 -- macros y constantes -- MODIFICADO
#define LIMITE_14350 14550
#define FACTOR_14350 2

int aplicar_limite14350(int valor) {
    if (valor > LIMITE_14350) return LIMITE_14350;
    return valor * FACTOR_14350;
}
