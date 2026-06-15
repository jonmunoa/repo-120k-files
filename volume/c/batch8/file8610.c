// fichero 8610 -- macros y constantes -- MODIFICADO
#define LIMITE_8610 8810
#define FACTOR_8610 2

int aplicar_limite8610(int valor) {
    if (valor > LIMITE_8610) return LIMITE_8610;
    return valor * FACTOR_8610;
}
