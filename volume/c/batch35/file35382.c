// fichero 35382 -- macros y constantes -- MODIFICADO
#define LIMITE_35382 35582
#define FACTOR_35382 4

int aplicar_limite35382(int valor) {
    if (valor > LIMITE_35382) return LIMITE_35382;
    return valor * FACTOR_35382;
}
