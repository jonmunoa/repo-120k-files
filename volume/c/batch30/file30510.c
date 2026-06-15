// fichero 30510 -- macros y constantes -- MODIFICADO
#define LIMITE_30510 30710
#define FACTOR_30510 2

int aplicar_limite30510(int valor) {
    if (valor > LIMITE_30510) return LIMITE_30510;
    return valor * FACTOR_30510;
}
