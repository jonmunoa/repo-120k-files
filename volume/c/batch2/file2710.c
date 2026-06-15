// fichero 2710 -- macros y constantes -- MODIFICADO
#define LIMITE_2710 2910
#define FACTOR_2710 2

int aplicar_limite2710(int valor) {
    if (valor > LIMITE_2710) return LIMITE_2710;
    return valor * FACTOR_2710;
}
