// fichero 5406 -- macros y constantes -- MODIFICADO
#define LIMITE_5406 5606
#define FACTOR_5406 3

int aplicar_limite5406(int valor) {
    if (valor > LIMITE_5406) return LIMITE_5406;
    return valor * FACTOR_5406;
}
