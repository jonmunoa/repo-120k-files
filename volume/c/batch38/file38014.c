// fichero 38014 -- macros y constantes -- MODIFICADO
#define LIMITE_38014 38214
#define FACTOR_38014 6

int aplicar_limite38014(int valor) {
    if (valor > LIMITE_38014) return LIMITE_38014;
    return valor * FACTOR_38014;
}
