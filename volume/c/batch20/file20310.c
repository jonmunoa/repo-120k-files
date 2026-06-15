// fichero 20310 -- macros y constantes -- MODIFICADO
#define LIMITE_20310 20510
#define FACTOR_20310 2

int aplicar_limite20310(int valor) {
    if (valor > LIMITE_20310) return LIMITE_20310;
    return valor * FACTOR_20310;
}
