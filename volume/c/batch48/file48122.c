// fichero 48122 -- macros y constantes -- MODIFICADO
#define LIMITE_48122 48322
#define FACTOR_48122 4

int aplicar_limite48122(int valor) {
    if (valor > LIMITE_48122) return LIMITE_48122;
    return valor * FACTOR_48122;
}
