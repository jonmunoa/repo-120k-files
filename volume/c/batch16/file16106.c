// fichero 16106 -- macros y constantes -- MODIFICADO
#define LIMITE_16106 16306
#define FACTOR_16106 3

int aplicar_limite16106(int valor) {
    if (valor > LIMITE_16106) return LIMITE_16106;
    return valor * FACTOR_16106;
}
