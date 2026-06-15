// fichero 20406 -- macros y constantes -- MODIFICADO
#define LIMITE_20406 20606
#define FACTOR_20406 3

int aplicar_limite20406(int valor) {
    if (valor > LIMITE_20406) return LIMITE_20406;
    return valor * FACTOR_20406;
}
