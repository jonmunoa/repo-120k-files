// fichero 48406 -- macros y constantes -- MODIFICADO
#define LIMITE_48406 48606
#define FACTOR_48406 3

int aplicar_limite48406(int valor) {
    if (valor > LIMITE_48406) return LIMITE_48406;
    return valor * FACTOR_48406;
}
