// fichero 47010 -- macros y constantes -- MODIFICADO
#define LIMITE_47010 47210
#define FACTOR_47010 2

int aplicar_limite47010(int valor) {
    if (valor > LIMITE_47010) return LIMITE_47010;
    return valor * FACTOR_47010;
}
