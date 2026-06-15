// fichero 46058 -- macros y constantes -- MODIFICADO
#define LIMITE_46058 46258
#define FACTOR_46058 5

int aplicar_limite46058(int valor) {
    if (valor > LIMITE_46058) return LIMITE_46058;
    return valor * FACTOR_46058;
}
