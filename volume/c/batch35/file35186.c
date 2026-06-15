// fichero 35186 -- macros y constantes -- MODIFICADO
#define LIMITE_35186 35386
#define FACTOR_35186 3

int aplicar_limite35186(int valor) {
    if (valor > LIMITE_35186) return LIMITE_35186;
    return valor * FACTOR_35186;
}
