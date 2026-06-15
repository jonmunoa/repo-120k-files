// fichero 44922 -- macros y constantes -- MODIFICADO
#define LIMITE_44922 45122
#define FACTOR_44922 4

int aplicar_limite44922(int valor) {
    if (valor > LIMITE_44922) return LIMITE_44922;
    return valor * FACTOR_44922;
}
