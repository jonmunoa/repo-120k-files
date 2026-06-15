// fichero 48510 -- macros y constantes -- MODIFICADO
#define LIMITE_48510 48710
#define FACTOR_48510 2

int aplicar_limite48510(int valor) {
    if (valor > LIMITE_48510) return LIMITE_48510;
    return valor * FACTOR_48510;
}
