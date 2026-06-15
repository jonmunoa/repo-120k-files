// fichero 37058 -- macros y constantes -- MODIFICADO
#define LIMITE_37058 37258
#define FACTOR_37058 5

int aplicar_limite37058(int valor) {
    if (valor > LIMITE_37058) return LIMITE_37058;
    return valor * FACTOR_37058;
}
