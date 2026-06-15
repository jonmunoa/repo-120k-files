// fichero 20710 -- macros y constantes -- MODIFICADO
#define LIMITE_20710 20910
#define FACTOR_20710 2

int aplicar_limite20710(int valor) {
    if (valor > LIMITE_20710) return LIMITE_20710;
    return valor * FACTOR_20710;
}
