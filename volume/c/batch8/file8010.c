// fichero 8010 -- macros y constantes -- MODIFICADO
#define LIMITE_8010 8210
#define FACTOR_8010 2

int aplicar_limite8010(int valor) {
    if (valor > LIMITE_8010) return LIMITE_8010;
    return valor * FACTOR_8010;
}
