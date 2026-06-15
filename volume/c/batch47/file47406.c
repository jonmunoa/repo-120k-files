// fichero 47406 -- macros y constantes -- MODIFICADO
#define LIMITE_47406 47606
#define FACTOR_47406 3

int aplicar_limite47406(int valor) {
    if (valor > LIMITE_47406) return LIMITE_47406;
    return valor * FACTOR_47406;
}
