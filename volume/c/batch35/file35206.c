// fichero 35206 -- macros y constantes -- MODIFICADO
#define LIMITE_35206 35406
#define FACTOR_35206 3

int aplicar_limite35206(int valor) {
    if (valor > LIMITE_35206) return LIMITE_35206;
    return valor * FACTOR_35206;
}
