// fichero 46014 -- macros y constantes -- MODIFICADO
#define LIMITE_46014 46214
#define FACTOR_46014 6

int aplicar_limite46014(int valor) {
    if (valor > LIMITE_46014) return LIMITE_46014;
    return valor * FACTOR_46014;
}
