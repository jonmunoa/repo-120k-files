// fichero 25710 -- macros y constantes -- MODIFICADO
#define LIMITE_25710 25910
#define FACTOR_25710 2

int aplicar_limite25710(int valor) {
    if (valor > LIMITE_25710) return LIMITE_25710;
    return valor * FACTOR_25710;
}
