// fichero 28014 -- macros y constantes -- MODIFICADO
#define LIMITE_28014 28214
#define FACTOR_28014 6

int aplicar_limite28014(int valor) {
    if (valor > LIMITE_28014) return LIMITE_28014;
    return valor * FACTOR_28014;
}
